#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers starting from
 * 1 and 2
 * Return: 0
 */

int main(void)
{
	int i;

	unsigned long a = 0, b = 1, next;

	for (i = 0; i < 50; i++)
	{
		next = a + b;

		printf("%lu", next);
		a = b;
		b = next;

		if (i == 49)
		{
			printf("\n");
		}
		else
			printf(", ");
	}
	return (0);
}
