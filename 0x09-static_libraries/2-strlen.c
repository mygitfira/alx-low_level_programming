#include "main.h"

/**
 * _strlen - check the code
 * @s: parametre s
 * Return: aleays k.
 */

int _strlen(char *s)
{
int k = 0;
while (*s != '\0')
{
k++;
s++;
}
return (k);
}
