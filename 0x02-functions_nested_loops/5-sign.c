#include "main.h"

/**
 * print_sign - print the sign of the number.
 *
 * @n: the number is positive or negative
 *
 * Return: 1 and prints (+) if n is positive or (-) if negative.
 *
 * Description: this function defined print_sign, prints sign of number
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return 1;
	}
	else if (n == 0)
	{
		_putchar(48);
		return 0;
	}
	else
	{
		_putchar(45);
		return -1;
	}
	
}
