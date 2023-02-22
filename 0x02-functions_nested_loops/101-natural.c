#include <stdio.h>

/**
 * main - List all natural numbers bellow 1024
 * that are multiples of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x & 5) == 0)
			sum += x;
	}
	printf("%d\n", sum);

	return (0);
}
