#include "main.h"
/**
 * print_last_digit - function to print last digit of a number
 * @c: variable to collect digits
 * Return: c
 */

int print_last_digit(int c)
{
	int x;

	x = c % 10;
	if (x < 0)
	{
		x = x * -1;
	}
	_putchar(48 + x);
	return (x);
}
