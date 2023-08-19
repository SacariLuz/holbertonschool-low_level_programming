#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints every other character of a string
 * @str: sttring character
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int i;
	int n;

	len = strlen(str);

	if((len % 2) == 0)
	{
		n = len / 2;
	}
	else 
	{
		n = (len - 1) / 2;
	}
	for (i = n; i < len; i ++)
	{
		putchar(str[i]);
	}
	putchar(10);
}
