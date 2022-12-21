#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatinate function
 * @dest: string 1.
 * @src: string 2.
 * @n: is byte
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int len = 0, i = 0;
while (dest[len] != '\0')
{
	len++;
}
while (i < n && src[i] != '\0')
{
dest[len] = src[i];
len++;
i++;
}
dest[len] = '\0';
return (dest);
}
