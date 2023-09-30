
#include <stdio.h>

/**
 * main - Program that print
 * @argc: of argc
 * @argv: of argv
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
