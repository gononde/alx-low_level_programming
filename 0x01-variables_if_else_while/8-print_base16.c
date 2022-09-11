#include<stdio.h>
/**
 * main - return numbers in base 16
 *
 * Description : using main function
 * this function "prints all the numbers of base 16 in lowercase"
 * Return: 0 after printing
 */
int main(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);
	}

	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);

}
