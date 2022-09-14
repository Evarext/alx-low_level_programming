#include <stdio.h>

/**
 * print_to_98- function that prints all natural number
 * from n to 98 with n as input
 * in order separated by a comma and followed by a space
 * @n: the number inputed and begins counting
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
