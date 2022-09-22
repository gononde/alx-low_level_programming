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
	int temp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temp;
	}
}

