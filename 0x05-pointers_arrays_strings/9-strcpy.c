#include "main.h"

/**
 *_strcpy - check the code
 *@dest: parametre a
 *@src: parameter b
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0, j;
while (src[i] != '\0')
{
i++;
}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
return (dest);
}
