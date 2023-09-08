#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizof func to print the size
 *
 * Return: Alawys 0 (Success)
*/

int main(vaid)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
