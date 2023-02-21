#include "main.h"

/**
 * print_alphabet - prints tge alphabets in lowercase
 * Description: Prints the alphabets
 * Return: Always 0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
