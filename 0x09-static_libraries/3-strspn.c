#include "main.h"

/**
 * _strspn - prints buffer in hexa
 * @s: source string
 * @accept: accepted srting
 * Return: 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0, j, n = 0;
while (accept[i])
{
j = 0;
while (s[j] != 32)
{
if (s[j] == accept[i])
n++;
j++;
}
i++;
}
return (n);
}
