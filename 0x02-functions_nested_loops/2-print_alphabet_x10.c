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

	for (i = 0 ; i <= 10 ; i++)
	{

		for (j = 'a'; j <= 'z' ; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
