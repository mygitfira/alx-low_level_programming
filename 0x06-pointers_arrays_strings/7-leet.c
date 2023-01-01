#include "main.h"
/**
 * leet - encode function
 * @a: char
 * Return: a.
 */

char *leet(char *a)
{
char i[] = "aeotl";
char j[] = "AEOTL";
char k[] = "43071";
int l, h;
for (l = 0; a[l] != '\0'; l++)
{
	for (h = 0; i[h] != '\0' && j[h] != '\0'; h++)
	{
	if (a[l] == i[h] || a[l] == j[h])
	{
		a[l] = k[h];
		break;
	}
	}
}
return (a);
}

