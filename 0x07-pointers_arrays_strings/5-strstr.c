#include "main.h"

/**
 * _strstr - prints buffer in hexa
 * @haystack: the address of memory to print
 * @needle: the size of the memory to print
 * Return: 0.
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, j;
for (j = 0, i = 0; haystack[j] != '\0' && needle[i] != '\0'; j++)
{
	if (haystack[j] == needle[i])
	{
		while (needle[i] != '\0')
		{
		if (haystack[j] == needle[i])
		{
		haystack += j;
		j++;
		return (haystack);
		}
		i++;
		}
	}
}
return ('\0');
}
