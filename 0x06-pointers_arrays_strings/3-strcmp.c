#include "main.h"
/**
 * _strcmp - compares two strings
 * Descritpion : using _strcmp function
 * this function "compares two strings"
 * @s1: param 1
 * @s2:param 2
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;

	}

	return (*s1 - *s2);
	
}
