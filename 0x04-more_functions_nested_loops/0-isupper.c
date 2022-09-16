#include "main.h"

/**
 * _isupper - this function checks for uppercase character
 * returns 1 if its uppercase
 * returns 0 if its lowercase
 * @c: the integer input
 * Return: return 1 for upper case and 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
