#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * _strdup - check the string for str.
 * @str: hold ALX SE
 * Return: Always 0.
 */

char *_strdup(char *str)
{
int i = 0, j;
char *s;
if (str == NULL)
	return (NULL);
while (str[i] != '\0')
	i++;
s = malloc(i * sizeof(char));
if (s == NULL)
	return (s);
for (j = 0; j < i; j++)
	s[j] = str[j];
return (s);
}
