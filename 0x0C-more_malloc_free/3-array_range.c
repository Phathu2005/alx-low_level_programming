#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(*a) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		a[i] = min;

	return (a);
}
