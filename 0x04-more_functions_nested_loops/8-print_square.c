#include <stdio.h>
#include "main.h"
/**
 * print_square - print square
 * Desecription : using print_square function
 * this function "print a square in terminal"
 * @size: parameter
 * Return: nothing
 */
void print_square(int size)
{
	int inb1, inb;

	if (size > 0)
	{
		for (inb1 = 0; inb1 < size; inb1++)
		{
			for (inb2 = 0; inb2 < (size - 1); inb2++)
			{
				putchar('#');
			}
			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
