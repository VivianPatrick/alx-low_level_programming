#include "main.h"

/**
 * print_last_digit - prints the last number
 * @c: the number
 * Return: Value of the last number
 */
int print_last_digit(int c)
{
	int ld;

	ld = c % 10;
	if (c < 0)
		ld = -ld;
	_putchar(ld + '0');

	return (ld);
}


