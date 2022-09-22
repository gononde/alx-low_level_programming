#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copying string
 * Description : usinf _strncpy
 * this function "copies string"
 * @dest: first param
 * @src: second param
 * @n: the copy limit
 * Return: string after copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
