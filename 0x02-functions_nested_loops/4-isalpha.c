#include "main.h"

/**
 * _isalpha-the function checks for letters, uppercase and lower case
 *
 * @c: c is used to pass argument to the function
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
