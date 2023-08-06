#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int c;
	int LF = 10;

	for (c = 122; c >= 97; c--)
		putchar(c);
	putchar(LF);
	getchar();
	return (0);
}
