#include "main.h"
/**
 * _isdigit - This checks for a digit
 *
 * @c: This is a digit
 *
 * Description: This function _isdigit checks for a digit (0 through 9)
 * Returns 1 if c is a digit 0 otherwise
 *
 * R: This return 1 and 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
