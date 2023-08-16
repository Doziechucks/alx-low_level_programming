#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @c: takes the value of the variable
 * Return: 0 or absolute value ( successful)
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs;

		abs = c * -1;
		return (abs);
	}
	return (c);
}
