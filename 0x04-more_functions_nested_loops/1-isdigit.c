#include "main.h"

/**
 * _isdigit - checks for a digit between 0 and 9
 * returns 1 if digit else return 0
 * @c: integer to be checked
 * Return: 0 if succese otherwise failure
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
