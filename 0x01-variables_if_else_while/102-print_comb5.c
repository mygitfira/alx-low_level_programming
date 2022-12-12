#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int c, m;
	for (c = 0; c < 100; c++)
	{
		for (m = 0; m < 100; m++)
		{
		if (c < m)
		{
		putchar((c / 10) + 48);
		putchar((c % 10) + 48);
		putchar(32);
		putchar((m / 10) + 48);
		putchar((m % 10) + 48);
		if (c != 98 || m != 99)
		{
		putchar(',');
		putchar(32);
		}
		}
		}
	}
	putchar(10);
return (0);
}
