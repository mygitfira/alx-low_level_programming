#include "main.h"

/**
 * _memcpy - function fills memory
 * @dest: the address of memory to print
 * @src: byte that fill memory
 * @n: the size of the memory to print
 * Return: the copied values.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
return (dest);
}
