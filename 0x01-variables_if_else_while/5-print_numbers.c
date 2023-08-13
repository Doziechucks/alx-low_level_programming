#include <stdio.h>
/**
 * main - printing numbers in base ten
 * Return: 0 if successful
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		printf("%d", x);
	putchar('\n');
	return (0);
}
