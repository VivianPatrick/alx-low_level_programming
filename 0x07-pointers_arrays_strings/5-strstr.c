#include "main.h"

/**
 * _strstr - finds the first occurence of a substring
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of substring, Null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}
		if (*y == '\0')
			return (haystack);
	}
	return (0);
}
