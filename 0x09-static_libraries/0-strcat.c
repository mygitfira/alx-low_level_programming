#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatinate function
 * @dest: string 1.
 * @src: string 2.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
int len = 0, i = 0;
while (dest[len] != '\0')
{
	len++;
}
while (src[i] != '\0')
{
dest[len] = src[i];
len++;
i++;
}
dest[len] = '\0';
return (dest);
}
