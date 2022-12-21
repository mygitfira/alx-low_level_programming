#include "main.h"

/**
 * string_toupper - _to upper function
 *
 * @n: cchar
 * Return: 0.
 */

char *string_toupper(char *n)
{
int i, l;
char j = 'a', k = 'A';
	for (i = 0; n[i] != '\0'; i++)
	{
		for (l = 0; l < 26; l++)
		{
			if (n[i] == ' ')
			{
				j = 'a';
				k = 'A';
			}
			else if (n[i] == j || n[i] == k)
			{
				n[i] = k;
				j = 'a';
				k = 'A';
			}
			else
			{
				j++;
				k++;
			}
		}
	}
	return (n);
}
