#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @w: The word to print
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char w)
{
	return (write(1, &w, 1));
}
