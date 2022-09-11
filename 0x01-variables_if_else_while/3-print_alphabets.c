#include<stdio.h>
/**
 * main - print alphabet lowecase and uppercase
 *
 * Description : using main function
 * this function is "Programming  the alphabet in lowercase_Uppercase"
 * Return: 0 after printing
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++) /* Print lowercase */
	{
			putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++) /* Uppercase */
	{ 
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
