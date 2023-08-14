#include <stdio.h>
#include <stdlib.h>
/**
 *main - print all posible combination of two numbers
 *Return: 0(successful)
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 100; x++)
	{
		for (y = 0; y < 100; y++)
			if (x < y)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (x != 9 || y != 9)
				{
					putchar(',');
					putchar(' ');

				}
			}
	}
	putchar('\n');
	return (0);
}

