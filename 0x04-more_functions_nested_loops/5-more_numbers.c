#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Description: This function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return Always 0.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
	 _putchar('\n');
}