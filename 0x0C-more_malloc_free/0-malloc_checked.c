#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function allocates memory using malloc
 * @b: the size to allocate
 *
 * Return:pointer allocated to the memory
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
