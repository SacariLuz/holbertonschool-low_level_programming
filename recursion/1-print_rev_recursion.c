#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - prints a sring in reverse
 *@s: string
 *
 *Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
