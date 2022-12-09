#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{

char c, m;
m = 'A';
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
while (m <= 'Z')
{
	putchar(m);
	m++;
}
putchar('\n');
return (0);
}
