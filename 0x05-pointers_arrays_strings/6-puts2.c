#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str : input
 * Return: print
 */
void puts2(char *str)
{
	int b = 0;

	for (; str[b] != '\0'; b++)
	{
		if ((b % 2) == 0)
			_putchar(str[b]);
		else
			continue;
	}
	_putchar('\n');
}
