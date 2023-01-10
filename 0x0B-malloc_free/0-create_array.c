#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: single character
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i = 0;
if (size == 0)
{
	return (NULL);
}
a = malloc(sizeof(char) * size);
while (i < size)
{
	if (a == NULL)
	{
		return (a);
	}
		a[i] = c;
		i++;
}
return (a);
}

