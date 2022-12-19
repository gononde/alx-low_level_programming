#include "main.h"
/**
 * _strlen - returns length of string
 * Description : using _strlen
 * this function "returns length of string"
 * @s: parameter
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
