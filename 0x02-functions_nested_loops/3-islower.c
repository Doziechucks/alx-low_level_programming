#include "main.h"

/**
 * _islower - checks for lower case
 * @c: variable c check lowercase
 * Return: 0 1 if c is lowercase returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
