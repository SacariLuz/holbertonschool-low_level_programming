#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: array elements
 * @size: is the number of elements in the array
 * @cmp: returns index of first element for cmp
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
				i++;
			}
	}
	return (-1);
}
