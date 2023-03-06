#include "main.h"

/**
 * _strstr - finds the first occurence of a substring
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of substring, Null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *xhaystack;
	char *yneedle;

	while (*haystack != '\0')
	{
		xhaystack = haystack;
		yneedle = needle;
		{
			haystack++;
			yneedle++;
		}
		if (!*yneedle)
			return (xhaystack);
		haystack = xhaystack + 1;
	}
	return (0);
}
