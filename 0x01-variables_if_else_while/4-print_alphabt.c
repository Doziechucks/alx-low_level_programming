#include <stdio.h>
/**
 * main - print lowercase alphabet except q and e
 * Return: 0 if successful
 */
int main(void)
{
	char x;

	x = 'a';
	if (x != 'q' && x != 'e')
	{
		while (x <= 'z')
			putchar(x)
	}
	putchar('\n')
	return (0);
}
