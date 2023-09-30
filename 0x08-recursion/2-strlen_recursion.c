#include "main.h"
/**
 * _strlen_recursion - writes the length of string
 * @s: the string to be measured.
 *
 * Return: the length of the string.
 */

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}

	return (x);
}
