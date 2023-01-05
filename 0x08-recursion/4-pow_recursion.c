#include "main.h"

/**
 * _pow_recursion - function recurtion
 * @x: string
 * @y: string
 * Return: 0.
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
if (y == 0)
{
	return (1);
}
if (y == 1 || x == 1)
{
	return (x);
}
return (x * _pow_recursion(x, y - 1));
}
