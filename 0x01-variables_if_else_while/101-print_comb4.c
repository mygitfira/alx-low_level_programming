#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int c, m = 48, l;
	for (c = 48; c <= 57; c++)
	{
		for (m = 48; m <= 57; m++)
		{
		for (l = 48; l <= 57; l++)
		{
		if (!((l == m) || m == c || m > l || c > m))
		{
		putchar(c);
		putchar(m);
		putchar(l);
		if (!(l == 57 && c == 55 && m == 56))
		{
		putchar(44);
		putchar(32);
		}
		}
		}
		}
	}
	putchar(10);
return (0);
}
