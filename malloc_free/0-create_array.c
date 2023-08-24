#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of size 
 * @size: size of array
 * @c: asing 
 *
 * Return: array NULL 
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int conter;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));
	{
	if (ptr == NULL)
		return (NULL);
	}
	conter = 0;
	while (conter < size)
	{
		ptr[conter] = c;
		conter++;
	}
	return (ptr);
}
