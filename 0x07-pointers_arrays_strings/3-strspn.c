#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: number of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, bool;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		bool = 1;
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (x);
}
