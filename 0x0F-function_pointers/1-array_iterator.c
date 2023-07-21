#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array
 * @array: array
 * @size: how many elements to print
 * @action: pointer to print in regular or hex
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int b;

	if (array == NULL || action == NULL)
		return;

	for (b = 0; b < size; b++)
	{
		action(array[b]);
	}
}
