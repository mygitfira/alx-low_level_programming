#include "main.h"

/**
 * _strchr - prints buffer in hexa
 * @s: the address of memory to print
 * @c: the size of the memory to print
 * Return: 0.
 */
char *_strchr(char *s, char c)
{
int i = 0, j;
while (s[i])
{
	i++;
}
		for (j = 0; j <= i; j++)
		{
			if (s[j] == c)
			{
			s += j;
			return (s);
			}
		}
return ('\0');
}
