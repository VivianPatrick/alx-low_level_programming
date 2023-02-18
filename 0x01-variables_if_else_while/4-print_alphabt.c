#include <stdio.h>

/**
 * main - Entry point
 * Description: Write a program that prints the alphabet in lowercase
 * Return: ALways 0
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && != 'q')
			putchar(x);
	}
	putchar('\n');
	return (0);
}
