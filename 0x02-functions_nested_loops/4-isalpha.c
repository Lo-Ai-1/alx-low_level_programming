#include "main.h"

/**
 * _isalpha - Checks if a character is letter.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase & uppercase, 0 otherwise.
 *
 * Description: This function, defined in _isalpha, checks whether the given
 * character @c is a lowercase or upper letter (a to z). It returns 1 if
 * the character is lowercase or uppercase, and 0 otherwise.
 */
int _isalpha(int c)
{
	int res;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}
