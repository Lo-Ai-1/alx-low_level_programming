#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: this file will print the alphabet without q and e
 *
 * Return 0 (Success)
*/

int main(void)
{
	/* Code here */
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	if (alphabet == 'e' || alphabet == 'q')
		alphabet++;
	else
		putchar(alphabet);
	alphabet++;
	}

	putchar('\n');

	/* The return value of 0 indicates successful program execution. */
	return (0);
}
