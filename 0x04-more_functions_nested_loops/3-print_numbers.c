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
char c;
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}
