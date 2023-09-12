#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: The 9 times table,
 *
 * Description: This function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	/* i = row while j = colomn */

	int i, j, res;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			res = i * j;

			if (res <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((res / 10) + 48);
			}
			_putchar((res % 10) + 48);
		}
		_putchar('\n');
	}
}
