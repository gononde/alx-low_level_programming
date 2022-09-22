#include "main.h"
#include <stdio.h>
/**
 * string_toupper - converting lowercase to uppercase
 * Description : using string_toupper function
 * this function "changes all lowercase letters of a string to uppercase."
 * @x: param
 * Return: return string
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
		{
			x[i] = x[i] - 32;
			i++;
		}
	}

	return (x);
}

