#include "main.h"

/**
 * _strpbrk - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 * Return: 0.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j = 0, k = 0;
while (accept[k])
{
	k++;
}
		for (j = 0; s[j] != '\0'; j++)
		{
			for (i = 0; i <= k; i++)
			{
			if (s[j] == accept[i])
			{
			s += j;
			return (s);
			}
			}
		}
return ('\0');
}
