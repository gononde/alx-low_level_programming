#include "main.h"
/**
 * print_numbers - prints numbers
 *
 * Description : using print_number function
 * this function "prints the numbers, from 0 to 9"
 * Return: nothing
 */
void print_numbers(void)
{
	char n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
