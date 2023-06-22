#include "main.h"

/**
 * _isdigit - function checks for a digit 0 - 9
 * @c: char to be checked
 *
 * return: 1 if c is a digit, 0 if  otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
