#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints stdout, string reverse
 * @s: starting reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int r;
	const char LF = 10;

	r = (strlen(s) - 1);

	while (r >= 0)
	{
		putchar(s[r]);
		r--;
	}
	putchar(LF);
}
