#include <stdio.h>

/**
 * main - Entry point
 * Description: Write a program that prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (c <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
