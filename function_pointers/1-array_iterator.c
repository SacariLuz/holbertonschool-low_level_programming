#include "function_pointers.h"

/**
 * array_iterator - function that displays values of array
 * @array: valor of the array
 * @size: size of the arrays
 * @action: pointier
 *
 * Return: nothin
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
