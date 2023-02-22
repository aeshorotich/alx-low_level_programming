#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int i; /*Declare loop variable outside of loop */

	/*Loop through all natural numbers below 1024 */
	for (i = 0; i < 1024; i++)
	{
		/*Check if the number is a multiple of 3 or 5 */
		if (i % 3 == 0 || i % 5 == 0)
		{ /*If it is, add it to the sum */
			sum += i;
		}
	}

	/*Print the sum followed by a newline character */
	printf("%d\n", sum);

	return (0);
}
