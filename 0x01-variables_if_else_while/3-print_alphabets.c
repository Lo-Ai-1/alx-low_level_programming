#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: this prog will print the alphabet
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char alphabet = 'a', ALPHABET = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}

	putchar('\n');

	return (0);
}
