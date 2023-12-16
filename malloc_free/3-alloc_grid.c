#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a pointer to a 2d arryat of ints
 * @width: how width of the grid.
 * @height: how height of the grid.
 *
 * Return: a pointer to 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)

		{
			free(p);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	return (p);
}
