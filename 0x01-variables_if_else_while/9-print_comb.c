#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int c = 48;
	while (c <= 57)
	{
	putchar(c);
	if (c != 57)
	{
	putchar(44);
	putchar(32);
	}
	c++;
	}
	putchar(10);
return (0);
}
