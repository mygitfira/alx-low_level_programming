#include "main.h"

/**
 * _memset - function fills memory
 * @s: the address of memory to print
 * @b: byte that fill memory
 * @n: the size of the memory to print
 * Return: the filled values.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
	s[i] = b;
}
return (s);
}
