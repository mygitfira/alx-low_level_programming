#include "main.h"

/**
 *_abs - Entry point
 * @n: character to be checked
 *Return: Always 0 (Success)
 */

int _abs(int n)
{
if (n < 0)
{
	return (-n);
}
else if (n > 0)
{
	return (n);
}
else
{
	return (0);
}
_putchar('\n');
return (0);
}
