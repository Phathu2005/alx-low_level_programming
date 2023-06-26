#include "main.h"
#include <stdio.h>


/**
 * print_array - function that prints n elements of an array of integers
 * @a: input array
 * @n: input n elements
 * Return: void
 */

void print_array(int *a, int n)

{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
