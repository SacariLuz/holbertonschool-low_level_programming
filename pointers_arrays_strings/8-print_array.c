#include <stdio.h>
#include <string.h>

/**
 * print_array - Print in stdout a array
 * @a: Array to print
 * @n: Elements of array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int c;

	c = 0;

	while (c < n)
	{
		printf("%d", *(a + c));
			if (c != n - 1)
			{
				printf(", ");
			}
		c++;
	}
	printf("\n");
}
