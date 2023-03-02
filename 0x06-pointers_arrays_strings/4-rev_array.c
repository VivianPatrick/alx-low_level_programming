#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of elements in the array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = o; x < n; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
