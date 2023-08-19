#include <string.h>
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: starting first character
 *
 * Return: void
 */

void puts2(char *str)
{
	int len;
	int i = 1;
	const int LF = 10;

	len = strlen(str);

	if (i != 0)
	{
		len--;
		putchar(str[0]);

		while (i <= len)
		{
			if (i % 2 == 0)
				putchar(str[i]);
			i++;
		}
	}
	putchar(LF);
}
