#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int c, m, l, p;
	for (c = 48; c <= 57; c++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (l = 48; l <= 57; l++)
			{
				for (p = 48; p <= 57; p++)
				{
					if (c <= l && m < p)
					{
					putchar(c);
					putchar(m);
					putchar(32);
					putchar(l);
					putchar(p);
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
