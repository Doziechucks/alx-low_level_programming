#include  <stdio.h>
/**
 * main - prints the alphabets in lowercase
 * Return: 0 (successful)
 */

int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; ++x)
		putchar(x);
	for (y = 'A'; y <= 'Z'; ++y)
		putchar(y);
	putchar('\n');
	return (0);
}
