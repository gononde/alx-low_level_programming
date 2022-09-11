#include<stdio.h>
/**
 * main - return digit with putchar
 *
 * Description : using main function
 * this function "prints all single digit numbers of base 10 starting from 0"
 * Return: 0 after printing
 */
int main(void)
{
	int e;

	for (e = '0' ; e <= '9' ; e++)
	{
		putchar(e);
	}
	putchar('\n');

	return (0);

}

