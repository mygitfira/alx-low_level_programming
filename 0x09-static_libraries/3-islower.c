#include "main.h"
#include <ctype.h>

/**
 *_islower - Entry point
 * @c: character to be checked
 *Return: Always 0 (Success)
 */

int _islower(int c)
{
if ((c >= 'a' && c <= 'z'))
{
	return (1);
}
else
{
	return (0);
}
return (0);
}
