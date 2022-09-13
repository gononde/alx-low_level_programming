#include "main.h"
/**
 * print_sign -  prints the sign of a number
 *
 * Description : using print_sign
 * this function "print_sign of a number"
 * @n: a character parameter
 * Return: o after printing
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	{
	else
	{
		_putchar('-');
		return (-1);
	}
}
