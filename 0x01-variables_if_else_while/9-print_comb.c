#include<stdio.h>
/**
 * main - return combinaison of number
 *
 * Descritpion : using main fucntion
 * this function " prints all possible combinations of single-digit numbers"
 * Return: 0 after printing
 */
int main(void)
{
	int c;

	for (c = 48 ; c <= 57 ; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');

	return (0);

}
