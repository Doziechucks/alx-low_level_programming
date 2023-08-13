#include <stdio.h>
/**
 * main - printing number combos
 * Return: 0(successful)
 */
int main(void)
{
	int x = 0;
	int y = 0;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (!((x == y) || (y > x)))
			{
				putchar('0' + y);
				putchar('0' + x);
				if (!(x == '8' && y == '9'))
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
