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
		n = -n 
		l = n % 10;
	}
	if (l < 0)
	{
		l = -l;
	}
	_putchar(l + '0');
	return (l);
}
