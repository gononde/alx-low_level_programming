#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string param
 * Return: returns string
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index] != '\0')
		index++;
	for (index = index - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
