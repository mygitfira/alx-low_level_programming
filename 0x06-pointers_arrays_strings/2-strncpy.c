#include "main.h"
#include <stdio.h>
/**
 * _strncpy - concatinate function
 * @dest: string 1.
 * @src: string 2.
 * @n: is byte
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (n > i)
{
dest[i] = '\0';
i++;
}
return (dest);
}
