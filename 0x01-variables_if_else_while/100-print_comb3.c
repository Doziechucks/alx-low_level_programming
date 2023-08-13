#include <stdio.h>
/**
 * main - printing number combos
 * Return: 0(successful)
 */
int main(void)
{
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			if (!((x == y)) || ((y > x)))
			{
				putchar(y);
				putchar(x);
				if (!(x == '9' && y == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
