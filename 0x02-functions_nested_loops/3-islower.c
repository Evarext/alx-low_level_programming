#include "main.h"

/**
 * _islower-this program tells when a letter is a lower case
 * it returns 1 if lowercase and returns o othewise
 * Return: 0
 */

int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
