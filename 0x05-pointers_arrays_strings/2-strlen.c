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
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		_putchar(s[len]);
	}
		return (len);
}
