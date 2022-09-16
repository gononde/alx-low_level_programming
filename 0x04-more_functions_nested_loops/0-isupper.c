#include<stdio.h>
#include "main.h"
/**
 * _isupper - check code
 *
 * Description : using _isupper function
 * this function "check a character if it is uppercase or not"
 * @c: character
 * Return: 1 whether it is, 0 otherwise
 */
int _isupper(int c)
{
	int c;

	if ((c >= 'A') && (c >= 'Z'))
	{
		return (1);
	}
		return (0);
}
