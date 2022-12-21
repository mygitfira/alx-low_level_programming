#include "main.h"
#include <stdio.h>
/**
 * _strcmp - concatinate function
 * @s1: string 1.
 * @s2: string 2.
 * Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
int len1 = 0, len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (len1 > len2)
		return (15);
	else if (len1 < len2)
		return (-15);
	else
		return (0);
	return (0);
}
