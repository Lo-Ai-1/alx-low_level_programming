#include "main.h"
/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: This function prints all the lowercase letters of the alphabet
 * in ascending order, followed by a newline character.
 */
void print_alphabet(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		_putchar(al);
	}
	_putchar('\n');
}
