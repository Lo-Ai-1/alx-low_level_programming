#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	_putchar('0' + (sum / 1000));
	_putchar('0' + ((sum / 100) % 10));
	_putchar('0' + ((sum / 10) % 10));
	_putchar('0' + (sum % 10));
	_putchar('\n');

	return (0);
}
