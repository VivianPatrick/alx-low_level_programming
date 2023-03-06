#include "main.h"

/**
 * set_string - stres the value of a pointer to a string
 * @s: pointer to pointer
 * @to: pointer to char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
