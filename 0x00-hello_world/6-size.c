#include <stdio.h>
/**
 * main - prints the size of types on the computer it is compiled and run on
 * Return: 0(successful)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
printf("size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("size of an long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(c));
return (0);
}
