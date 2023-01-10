#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatinate strings
 * @s1: strings 1.
 * @s2: strings 2.
 * Return: Always 0.
 *
 */

char *str_concat(char *s1, char *s2)
{
int len1 = 0, len2 = 0, j = 0, i = 0;
char *conca;
while (s1[len1] != '\0')
	len1++;
while (s2[len2] != '\0')
	len2++;
conca = malloc(sizeof(char) * (len1 + len2 + 1));
if (conca == NULL)
	return (NULL);
if (s1)
{
	while (i < len1)
	{
		conca[i] = s1[i];
		i++;
	}
}
if (s2)
{
	while (j < (len1 + len2))
	{
		conca[i] = s2[j];
		i++;
		j++;
	}
}
conca[j] = '\0';
return (conca);
}
