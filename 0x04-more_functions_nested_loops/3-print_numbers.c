#include "main.h"
/**
 * print_numbers - Prints 0123456789\n
 *
 * Return: void
 */
void print_numbers(void)
{
char c;
for (c = 0; c <= 9; c++)
{
_putchar(c + '0');
}
_putchar('\n');
}
