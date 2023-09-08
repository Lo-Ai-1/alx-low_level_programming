#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: this file will print the alphabet without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Code here */
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
			alphabet++;
	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');

	return (0);
}

