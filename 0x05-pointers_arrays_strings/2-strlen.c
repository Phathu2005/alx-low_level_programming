#include "main.h"

/**
 * _strlen - function that finds length of a string
 * @s: string to print
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
