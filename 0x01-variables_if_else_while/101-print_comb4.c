#include <stdio.h>
/**
 * main - printing three number
 * Return: 0(successl)
 */
int main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (z = 0; z <= 9; z++)
			{
				if (!((x == y) || (y > x) || (z == x) || (z == y) || (z > x)))
				{
					putchar('0' + y);
					putchar('0' + x);
					putchar('0' + z);
					if (!(x == 8 && y == 7 && z == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
