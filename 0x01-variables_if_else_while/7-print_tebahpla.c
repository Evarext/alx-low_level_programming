#include <stdio.h>

/**
 * main-a program that prints alphabets in reverse order
 *
 * Return: 0
 */

int main(void)
{
	int l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
