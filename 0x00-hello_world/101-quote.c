#include<unistd.h>
/**
 * main - Entry point
 *
 * Description: print the exaxt sentence with a function
 *
 * Return: 1 (error)
*/
int main(void)
{
	char sen[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, sen, 59);
	return (1);
}
