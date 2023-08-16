#include "main.h"

/**
 * main - prints lower case alphabets
 * print_alphabet  - prints Alphabet
 * Return: 0 if succesful
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');

}
