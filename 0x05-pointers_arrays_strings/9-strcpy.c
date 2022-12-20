#include "main.h"

/**
 *_strcpy - check the code
 *@dest: parametre a
 *@src: parameter b
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int len = 0;
while (*(src + len) != '\0')
{
	*(dest + len) = *(src + len);
	len++;
}
*(dest + len) = '\0'; 
return (dest);
}
