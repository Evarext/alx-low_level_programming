#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting from
 * 1 and 2
 * Return: 0
 */

int main(void)
{
	int i = 0;

	log int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;

		printf("%lu", next);

		if (i < 49)
		{
			printf(",");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
