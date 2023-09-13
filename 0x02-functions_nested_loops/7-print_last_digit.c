#include "main.h"

/**
 * print_last_digit - Print the last digit of number
 *
 * @n: The number which prints the last digit
 *
 * Return: The value of the last digit
 *
 * Description: This function that prints the last digit of a number.
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
	{
		l = -1 * (n % 10);
	}
	else
	{
		l = n % 10;
	}
	_putchar(l + '0');
	return (l);
}
