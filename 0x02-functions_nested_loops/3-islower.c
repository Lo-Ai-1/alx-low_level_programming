#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 *
 * Description: This function, defined in _islower.c, checks whether the given
 * character @c is a lowercase letter (a to z). It returns 1 if the character
 * is lowercase, and 0 otherwise.
 */
int _islower(int c)
{
	int res;

	if (c >= 'a' && c <= 'z')
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}
