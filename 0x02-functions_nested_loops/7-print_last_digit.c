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
	int z;
	if (n < 0)
		n = -n;
	z = n % 10;
	_putchar(z + '0');
	return (z);
}
