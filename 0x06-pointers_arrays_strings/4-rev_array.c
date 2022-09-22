#include "main.h"
#include <stdio>
/**
 * reverse_array - reverse content
 * Description : using reverse_array function
 * this function " reverses the content of an array of integers"
 * @a: first param
 * @n: second param
 * Return: return  number
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;

	for (i = 1 ; i < n ; i++)
	{
		p++;
	}
	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}


