#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings
 * Descritpion : using _strcmp function
 * this function "compares two strings"
 * @s1: param 1
 * @s2:param 2
 * Return: string
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0, lim;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			d = s1[c] - s2[c];
			break;
		}
		c++;
	}
}
