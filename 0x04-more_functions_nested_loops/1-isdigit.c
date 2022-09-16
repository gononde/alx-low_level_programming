#include "main.h"
/**
 * _isdigit - check for digit
 *
 * Description : using _isdigit function
 * this function "checks for a digit"
 * @c: parameter
 * Return: 1 or 0 after test
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
