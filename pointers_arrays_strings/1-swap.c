#include <stdio.h>

/**
 * swap_int - update value of parameter it point
 * @a: integer1
 * @b: integer2
 * *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	(c = *a);

	(*a = *b);
	(*b = c);
}
