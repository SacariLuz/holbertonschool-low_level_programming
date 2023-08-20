#include <string.h>
#include <stdio.h>

/**
 * _pow_recursion - value of x raised the power of y
 * @x: value to raise
 * @y: the power
 *
 * Return: result the powers
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
