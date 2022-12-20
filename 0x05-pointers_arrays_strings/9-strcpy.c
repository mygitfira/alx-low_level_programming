#include "main.h"

/**
 *_strcpy - check the code
 *@dest: parametre a
 *@src: parameter b
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i) != '\0')
{
	*(dest + i) = *(src + i);
	i++;
}
*(dest + i) = '\0'; 
return (dest);
}
