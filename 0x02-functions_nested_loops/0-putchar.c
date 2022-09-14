#include "main.h"
#include <stdio.h>

/**
 * _putchar-the function to be invoked
 *
 * Return: 0
 */

int _putchar(void)
{
	printf("_putchar");
	return (0);
}

/**
 * main-main entry point of the code
 *
 * Return:0
 */

int main(void)
{
	int c = _putchar();

	putchar(c);
	putchar('\n');
	return (0);
}
