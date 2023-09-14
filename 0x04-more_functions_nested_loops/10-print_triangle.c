#include "main.h"

/**
 * print_triangle - Prints a triangle of a specified size.
 *
 * @size: The size of the triangle.
 *
 * Description: This function prints a triangle composed of '#' characters
 * with a specified size. If the size is 0 or less, it prints only a newline.
 *
 * Return: No return value (void).
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{

		for (j = 0; j < 2 * (size - i) - 1; j++)
		{
			_putchar(' ');
		}

		for (k = 0; k <= i; k++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}

