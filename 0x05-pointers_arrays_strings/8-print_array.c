#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of int
egers
 * @a: Array of integers
 * @n: Number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n n - 1)
			printf(", ");
	}

	printf("\n");
}
