#include <stdio.h>
#include <string.h>

/**
 * _strcpy - Copy a strig to buffer
 * @dest: Its buffer
 * @src: Source of string
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int c;

	c = 0;

	while (*(src + c) != '\0')
	{
		(*(dest + c) = *(src + c));
		c++;
	}

	*(dest + c) = *(src + c);

	return (dest);
}
