#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of string
 * @s: String to be measured
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
