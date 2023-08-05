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

	for (c = 97 ; c <= 122; c++)
		if (c != 101 && c != 113)
			putchar(c);
	putchar(LF);
	getchar();
	return (0);
}
