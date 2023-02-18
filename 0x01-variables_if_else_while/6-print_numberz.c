#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints the lowercase alphabet in reverse.
 * Return: Always 0
 */
int main(void)
{
	int c;

	while (c < 10)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}

