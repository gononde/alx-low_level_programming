#include<stdio.h>
/**
 * main - return reverse lowercase alphabet
 *
 * Description : using main function
 * this function "prints the lowercase alphabet in reverse"
 * Return: 0 after printing
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
