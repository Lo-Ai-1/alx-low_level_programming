#include "main.h"

/**
 * print_most_numbers - This is a function that prints the numbers,
 * from 0 to 9.
 *
 * Description: This function prints the numbers from 0 to 9,
* excluding the numbers 2 and 4,
 * followed by a new line.
 *
 * Return: This function does not return a value (void).
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}

