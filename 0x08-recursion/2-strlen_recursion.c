#include "main.h"

/**
 * _strlen_recursion - function recurtion
 * @s: string
 * Return: length.
 */

int _strlen_recursion(char *s)
{
int i = 0;
	if (*s != '\0')
	{
	s++;
	_strlen_recursion(s);
	i++;
	}
	return (i);
}
