#include <stdio.h>
/**
 * main - entry pointof code
 * description: 5 below 1024
 * Return: o
 */

int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;

		if (next % 2 == 0)
		sum += next;
	}
	printf("%i", sum);
	return (0);
}
