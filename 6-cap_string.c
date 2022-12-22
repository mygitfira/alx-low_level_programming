#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalize function
 * @a: string 1.
 *
 * Return: dest.
 */
char *cap_string(char *a)
{
int len = 0, i, j;
char k = 'a', l = 'A';
while (a[le] != '\0')
{
	le++;
}
for (i = 0; i <= le; i++)
{
	k = 'a';
	l = 'A';
	if (a[i] == ' ' || a[i] == '\n' || a[i] == ',' || a[i] == ';' || a[i] == '.' || a[i] == '!' || a[i] == '?' || a[i] == '"' || a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}' || a[i] == '\t')
	{
		if (a[i] == '\t')
			a[i] = ' ';
		for (j = 0; j < 26; j++)
		{
			if (a[i + 1] == ' ')
			{
				l = 'A';
				k = 'a';
			}
			else if (a[i + 1] == k || a[i + 1] == l)
			{
				a[i + 1] = l;
				k = 'a';
				l = 'A';
			}
			else
			{
				k++;
				l++;
			}
		}
	}
}
return (a);
}
