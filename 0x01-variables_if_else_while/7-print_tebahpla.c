#include<stdio.h>
/**
 * main - return reverse lowercase alphabet
 *
 * Description : using main function
 * this function prints "lowercase alphabet reverse"
 * Returno: 0 after printing
 */
int main(void)
{
	char b;

	for (b = 'z' ; b >= 'a' ; b--)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);

}
