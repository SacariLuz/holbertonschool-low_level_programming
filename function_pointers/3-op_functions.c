#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - protoype for sum
 * @a: first number to add
 * @b: second number to add
 *
 * Return: the sum of the two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtraction prototype
 * @a: first number to subtract
 * @b: second number to subtract
 *
 * Return: the suntraction of the two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplying prototype
 * @a: first number to multiplying
 * @b: second number to multiplying
 *
 * Return: the multiplying of the two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division the prototype
 * @a: first number to divide
 * @b: second number to divide
 *
 * Return: divide of two numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - waste prototype
 * @a: first number divide
 * @b: second number divide
 *
 * Return: the waste of divide
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
