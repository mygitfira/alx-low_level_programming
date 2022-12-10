#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

	char m;
m = 'a';
	while (m <= 'z')
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
