#include "main.h"

/**
 * _abs - Compute the absolute value of an integer.
 * @n: The number for which to compute the absolute value.
 *
 * Return: The absolute value of n.
 *
 * Description: This function computes the absolute value of an integer.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}

