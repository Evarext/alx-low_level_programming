#include "main.h"

/**
 * _abs- function that calculates the absolute value of an integer
 * @c: used to pass argument to the function
 * Return: 0
 */

int _abs(int c)
{
	if (c == 0 || c > 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
