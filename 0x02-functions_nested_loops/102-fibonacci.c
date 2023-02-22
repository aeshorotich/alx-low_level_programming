#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long fib1 = 1; /*First number in sequence */
	long fib2 = 2; /*Second number in sequence */
	long next; /*Next number in sequence */

	/*Print the first two numbers in the sequence */
	printf("%ld, %ld", fib1, fib2);

	/*Loop through the remaining 48 numbers */
	for (i = 3; i <= 50; i++)
	{
		/*Calculate the next number in the sequence */
		next = fib1 + fib2;

		/*Print the next number */
		printf(", %ld", next);

		/*Update fib1 and fib2 to continue the sequence */
		fib1 = fib2;
		fib2 = next;
	}

	/*Print a newline character to end the output */
	printf("\n");

	return (0);
}
