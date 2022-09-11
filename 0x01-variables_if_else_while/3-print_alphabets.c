#include <stdio.h>

/**
 * main-prints alphabets in lower case, then upper case
 *
 * Return: 0
 */

int main(void)
{
	int l = 'a';
	int u = 'A';

	while (l <= 'z')
	{
		putchar(l);
		l += 1;
	}

	while (u <= 'Z')
	{
		putchar(u);
		u += 1;
	}
	putchar('\n');
	return (0);
}
