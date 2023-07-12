#include "main.h"

/**
 * char *_strcpy - Function that copies the string pointed by src
 * @dest: copy to
 * @src: copy from
 *
 * Return: string value
 */
char *_strcpy(char *dest, char *src)
{
	int p = 0;
	int k = 0;

	while (*(src + p) != '\0')
	{
		p++;
	}
	for ( ; k < p ; k++)
	{
		dest[k] = src[k];
	}
	dest[p] = '\0';
	return (dest);
}
