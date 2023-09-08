#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	/* Code here */

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
