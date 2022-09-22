#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * Description : using _strncat
 * this function "concatenates two strings"
 * @dest: first param
 * @src: second param
 * @n: third param
 * Return: un pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}
	dest[dlen + n + 1] = '\0';

	return (dest);
}



