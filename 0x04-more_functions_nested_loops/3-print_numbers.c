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
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}

	putchar(10);
}
