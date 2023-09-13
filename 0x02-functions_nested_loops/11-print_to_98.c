#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints natural numbers
 *
 * Return: Natural numbers from n to 98
 *
 * @n: This number will start with
 *
 * Description: That function that prints all natural numbers from n to 98,
 * followed by a new line
 *
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
