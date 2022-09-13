#include "main.h"
/**
 *  _isalpha - checks for an alphabetic char
 *
 *  Descritpion : using  _isalpha function
 *  this function " checks for an alphabetic character"
 *  @c: a character argument
 *  Return: 0 after printing
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
