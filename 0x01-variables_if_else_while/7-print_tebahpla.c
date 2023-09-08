#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this prog will print the alphabet
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char lcar = 'z';

	while (lcar >= 'a')
	{
		putchar(lcar);
		lcar--;
	}

	putchar('\n');

	return (0);
}
