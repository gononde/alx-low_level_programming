#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates strings
 * Description : using _strcat function
 * this function "concatenates two strings"
 * @dest: first char
 * @src: second char
 * Return: 0 always
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
		dest[len] = '\0';
	}

	return (dest);

}
