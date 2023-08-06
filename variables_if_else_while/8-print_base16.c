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
	int nm;
	int LF = 10;

	for (c = 48; c <= 57; c++)
		putchar(c);
	for (nm = 97; nm <= 102; nm++)
		putchar(nm);
	putchar(LF);
	getchar();
	return (0);
}
