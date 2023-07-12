#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: the input value
 * @src: the input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int b;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}
