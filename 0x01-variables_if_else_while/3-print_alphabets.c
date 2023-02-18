#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the alphabet in lowercase, followed by
 *              the alphabet in uppercase, and then a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	/* print lowercase letters */
	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	
	/* print uppercase letters */
	for (c = 'A'; c <= 'Z'; ++c)
		putchar(c);
	
	putchar('\n');
	return (0);
}
