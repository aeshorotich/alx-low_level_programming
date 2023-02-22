#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	long fib1 = 1; /*First number in sequence */
	long fib2 = 2; /*Second number in sequence */
	long next; /*Next number in sequence */
	long sum = 2; /*Sum of even-valued terms */

	/*Loop through the sequence until the values exceed 4,000,000 */
	while (fib2 <= 4000000)
	{
		/*Calculate the next number in the sequence */
		next = fib1 + fib2;

		/*If the next number is even, add it to the sum */
		if (next % 2 == 0)
		{
			sum += next;
		}

		/*Update fib1 and fib2 to continue the sequence */
		fib1 = fib2;
		fib2 = next;
	}

	/*Print the sum of even-valued terms followed by a newline character */
	printf("%ld\n", sum);

	return (0);
}
