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
int i, j, trigger;
char nots[] = ",;.!?(){}\n\t\" ";
for (i = 0, trigger = 0; a[i] != '\0'; i++)
{
	for (j = 0; nots[j] != '\0'; j++)
	{
		if (nots[j] == a[i])
			trigger = 1;
		if (a[i] == '\t')
			a[i] = ' ';
	}
	if (trigger)
	{
		if (a[i + 1] == ' ')
			trigger = 0;
		if (a[i + 1] > 96 && a[i + 1] < 123)
		{
			a[i + 1] -= 32;
			trigger = 0;
		}
		else if (a[i + 1] > 64 || a[i + 1] < 91)
			trigger = 0;
		else if (a[i + 1] > 47 || a[i + 1] < 58)
			trigger = 0;
	}
}
return (a);
}
