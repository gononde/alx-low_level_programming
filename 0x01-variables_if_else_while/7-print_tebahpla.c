#include<stdio.h>
/**
 * main - reverse lowercase alphabet
 *
 * Description : using main function
 * This function prints "lowercase alphabet reverse"
 * Returno: 0 after print
 */
int main(void)
{
	char b;

	for (b ='z' ; b >= 'a' ; b--)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);

}
