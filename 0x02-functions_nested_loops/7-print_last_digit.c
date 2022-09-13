#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * Description : using print_last_digit function
 * this function "prints the last digit of a number"
 * @n: a pararmeter
 * Return: a last digit
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar('0' + x);
	_putchar('\n');
	return (x);
}
