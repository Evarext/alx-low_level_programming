#include <stdio.h>

/**
 * main-program that prints alpha in lower case but skips e&q
 *
 * Return: 0
 */

int main(void)
{
	int l = 'a';

	while (l <= 'z')
	{
		if (l == 'e' || l == 'q')
		{
			l += 1;
		}
		else
		{
			putchar(l);
			l += 1;
		}
	}
	putchar('\n');
	return (0);
}
