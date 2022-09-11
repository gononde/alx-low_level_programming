#include<stdio.h>
/**
 * main - print lowercase except q and e
 *
 * Description
 * this function prints "lowercase alphabet except q and e"
 * Return: 0 after printing
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	

	{

	if (ch != 'e' && ch != 'q')
	{ 

		putchar(ch);
	}

	}

	putchar('\n');

	return (0);
}


