#include<stdio.h>
#include "main.h"
/**
 * int _islower - Check alpahabet lowercase
 *
 * Description -using int _islower function
 * this function "checks for lowercase character"
 * Return: returns 1 and 0 depend condition
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
