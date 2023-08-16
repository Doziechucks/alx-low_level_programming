#include "main.h"

/**
 * print_sign - prints the sign on a number
 * @n: varuable to check sign
 * Return: returns 1 if posive, -1 for nagative and 0 for zero
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
