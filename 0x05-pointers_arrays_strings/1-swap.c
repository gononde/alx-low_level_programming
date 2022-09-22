#include "main.h"
#include <stdio.h>
/**
 * swap_int - swapping values
 * Descritpion : using swap_int function
 * this function "swaps the values of integers"
 * @a: first param
 * @b: second param
 * Return: values
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
