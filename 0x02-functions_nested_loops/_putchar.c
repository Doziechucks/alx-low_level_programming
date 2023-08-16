#include "main.h"
#include <unistd.h>
/**
 * _putchar - putchar prints out character's standard out
 * @c: character to print
 * Return: on successful 1.
 * on error Return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
