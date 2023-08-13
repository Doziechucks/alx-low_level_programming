#include  <stdio.h>
/**
 * main - prints the alphabets in lowercase
 * Return: 0 (successful)
 */

int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; --x)
		putchar(x);
	putchar('\n');
	return (0);
}
