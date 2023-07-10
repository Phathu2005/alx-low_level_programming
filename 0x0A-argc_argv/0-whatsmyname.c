#include <stdio.h>
#include "main.h"

/**
 * main - program prints its name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("s%s\n", *argv);

	return (0);
}
