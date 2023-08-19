#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints half of string
 * @str: sttring character
 *
 * Return: void
 */

void puts_half(char *str)
{
	long len, start;
	const int NEW_LINE = 10;

	len = strlen(str);

	if (len != 0)
	{
		if (len % 2 == 0)
			start = len / 2;
		else
			start = ((len - 1) / 2) + 1;

		len--;

		while (start <= len)
		{
			putchar(str[start]);
			start++;
		}
	}
	putchar(NEW_LINE);

}
