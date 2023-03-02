#include "main.h"

/**
 * _strcat - concatenate two strings
 * @destination: copy to destination
 * @source: copy from source
 * Return: pointer to destination
 */
char *_strcat(char *destination, char *source)
{
	int x;
	int y;

	x = 0;
	while (destination[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (source[y] != '\0')
	{
		destination[x] = source[y];
		x++;
		y++;
	}
	destination[x] = '\0';
	return (destination);
}
