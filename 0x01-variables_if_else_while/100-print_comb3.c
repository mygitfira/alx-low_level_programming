#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int c, m = 48;
	for (c = 48; c <= 57; c++)
	{
		for (m = 48; m <= 57; m++)
		{
		if (!((m == c) || c > m))
		{
		putchar(c);
		putchar(m);
		if (!(m == 57 && c == 56))
		{
		putchar(44);
		putchar(32);
		}
		}
		}
	}
	putchar(10);
return (0);
}
