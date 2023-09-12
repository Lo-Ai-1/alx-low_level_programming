#include "main.h"
/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times
 *
 * Description: this function prints 10 times the alphabet,
 * in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	int bet, i;

	for (i = 0; i < 10; i++)
	{
		for (bet = 'a'; bet <= 'z'; bet++)
		{
			_putchar(bet);
		}
		_putchar('\n');
	}
}
