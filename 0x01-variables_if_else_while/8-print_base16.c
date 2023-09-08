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
	int digit = 48; /* 48 is decimal */

	/* Code here */

	for (digit = 48; digit <= 102; digit++)
	{
		putchar(digit);
		if (digit == 57)
			digit += 39;
	}
	putchar('\n');

	return (0);
}
