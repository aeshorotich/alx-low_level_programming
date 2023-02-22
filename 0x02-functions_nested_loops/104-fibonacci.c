#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int count = 0; /*Number of Fibonacci numbers printed so far */
	int fib1 = 1; /*First number in sequence */
	int fib2 = 2; /*Second number in sequence */
	int next; /*Next number in sequence */

	/*Print the first two Fibonacci numbers */
	printf("%d, %d", fib1, fib2);
	count += 2;

	/*Loop through the sequence until 98 Fibonacci numbers have been printed */
	while (count < 98)
	{
		/*Calculate the next number in the sequence */
		next = fib1 + fib2;

		/*Print the next Fibonacci number */
		printf(", %d", next);
		count++;

		/*Update fib1 and fib2 to continue the sequence */
		fib1 = fib2;
		fib2 = next;
	}

	/*Print a newline character to end the output */
	printf("\n");

	return (0);
}
