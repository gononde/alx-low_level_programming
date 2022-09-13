#include<stdio.h>
#include "main.h"
/**
 * _islower - Checks for lowercase character
 *
 * Description : using  _islower(int c) function
 * this function "checks for lowercase character"
 * @c: a character argument
 * Return: returns 1 and 0 depend condition
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
