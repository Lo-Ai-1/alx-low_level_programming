#include "main.h"
/**
 * print_square - This function that prints square, followed by new line.
 *
 * @size: Is the size of the square
 *
 * Description: A function that prints a square, followed by a new line.
 * Where size is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 *
 * Resturn: Always 0
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
