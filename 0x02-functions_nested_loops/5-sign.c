#include "main.h"

/**
 * print_sign-this function prints sihgns of numbers
 * prints + and return 1 if positive
 * prints - and returns -1 if negative
 * prints 0 and returns zero if zero
 * @n: arguments are passed through n
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
