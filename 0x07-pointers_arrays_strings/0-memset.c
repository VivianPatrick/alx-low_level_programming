#include "main.h"

/**
 * _memset - fill a block of memory with a specific value value
 * @s: starting addr of  memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with the new value of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;
	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
