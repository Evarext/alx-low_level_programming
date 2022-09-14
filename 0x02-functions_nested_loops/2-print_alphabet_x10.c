#include "main.h"

/**
 * print-alphabet_x10-this program prints alphabets 10 times
 * on a new line
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char n = 0;

	while (n < 9)
	{
		char l = 'a';

		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		n += 1;
	}
}
