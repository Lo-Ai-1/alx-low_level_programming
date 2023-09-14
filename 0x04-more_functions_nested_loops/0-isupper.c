#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 *
 * @c: The character which will be checked
 *
 * Description: This is a function that checks for uppercase character.
 * Returns 1 if c is uppercase and 0 otherwise
 *
 * Return: 1 if the character is c otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
