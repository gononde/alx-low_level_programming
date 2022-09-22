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
	int index = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);

}