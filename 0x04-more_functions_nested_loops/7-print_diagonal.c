#include "main.h"
/**
 * print_diagonal - This function should draws diagonal line on termina
 *
 * @n: Is the number of times the character \ should be printed
 *
 * Description: That function draws a diagonal line on the terminal
 * if n is 0 or less, the function should only print a \n
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, spc;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (spc = 0; spc < i; spc++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');

		}
	}
}
