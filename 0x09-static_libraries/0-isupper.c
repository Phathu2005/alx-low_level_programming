#include "main.h"

/**
 * _isupper - Function that checks if uppercase letters
 * @c: char to be checked
 *
 * Return: if its uppercase return 1, else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
