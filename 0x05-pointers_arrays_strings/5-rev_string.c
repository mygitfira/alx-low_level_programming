#include "main.h"
#include <stdio.h>
/**
 * rev_string - check the code
 * @s: parametre s
 * Return: aleays k.
 */

void rev_string(char *s)
{
int i = 0, j;
char k = s[0];
while (s[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
	i--;
	k = s[j];
	s[j] = s[i];
	s[i] = k;
}
}
