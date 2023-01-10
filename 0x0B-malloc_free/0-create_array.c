#include "main.h"
#include <stdlib.h>
/**
 * create_array - 
 * @size: 
 * @c: 
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i = 0;
a = malloc(sizeof(char) * size);
while (i < size)
{
	if (a == NULL)
	{
		return (a);
	}
	if (size == 0)
	{
		return (NULL);
	}
		a[i] = c;
		i++;
}
return (a);
}

