#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-a program that prints base 16 numbers in lower case
 *
 * Return: 0
 */

int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
