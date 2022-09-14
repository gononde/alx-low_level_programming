#include<stdio.h>
#include "main.h"
/**
 * print_to_98 - returns natural numbers
 *
 * Description : using print_to_98 function
 * this function "prints all natural numbers from n to 98"
 * @n: parameter
 * Return: number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, " n--);
		
		printf(" % d\n", n);
	}
	else
	{
		while (n < 98)
			pirntf("%d, " n++);
		printf("%d\n," n);
	}
}

