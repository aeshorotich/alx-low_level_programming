#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a[5] = { 98, 102, 402, -102, 0 };

	int *p = &a[0] + 1;

	/*
	 *Your code goes here
	 */

	printf("a[2] = %d\n", *(p + 1));

	return (0);
}
