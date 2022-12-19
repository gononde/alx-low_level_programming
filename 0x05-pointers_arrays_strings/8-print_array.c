#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a : an array
 * @n : value will be printed
 * Return: elements
 */
void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k != n - 1)
			printf(", ");
	}
	printf("\n");
}
