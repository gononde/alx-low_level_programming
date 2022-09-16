#include <stdio.h>
#include "main.h"
/**
 * print_line - draws a straight line
 *
 * Descritpion : using print_line
 * this function "draws a straight line in the terminal"
 *@n: an parameter
 * Return: nothing
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
