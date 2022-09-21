#include "main.h"

/**
 * swap_int - swap the value of integers
 * @a: pointer to first integer
 * @b: pointer to second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	if (a && b)
	{
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
}
