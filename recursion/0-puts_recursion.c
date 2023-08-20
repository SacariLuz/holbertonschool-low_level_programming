#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - fuction prints a string puts
 * @s: string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
