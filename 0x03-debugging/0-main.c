#include <stdio.h.>
#include <time.h>
#include <stdlib.h>
#include "main.h"

void positive_or_negative(int i)
{
	int n;

srand(time(0));

n = i;

if (n > 0)
{	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero\n", n);
}
else 
{	printf("%d is negative\n", n);	

return (0);
}
}

/**
 * main - give 0 after test
 *
 * Descritpion : using main function
 * this function "Gives 0 when test is correct"
 * Return: 0 after test
 */
int main(void)
{
	int i;

	int i = 0;

	positive_or_negative(i);

	return (0);
}
