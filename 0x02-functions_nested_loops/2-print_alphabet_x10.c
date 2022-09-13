#include<stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints 10x_alphabet
 *
 * Description - using print_alphabet_x10
 * this function "prints 10 times the alphabet, in lowercase"
 * Return : 0 after printing
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);

		for (j = 0 ; j <= 10 ; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
