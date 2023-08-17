#include "main.h"

/**
 * _isupper -  Test for uppercase character
 * @c: character in check
 *
 * Return: different of 0 if is uppercase and 0 otherwise
 */
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
