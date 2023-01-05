#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function recurtion
 * @n: string
 * Return: length.
 */
int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
return (_sqrt(n , 1));
}
/**
 * _sqrt - function recurtion
 * @n: string
 * @i: string
 * Return: length.
 */
int _sqrt(int n, int i)
{
int square;
square = i * i;
if (square == n)
return (i);
if (square > n)
return (-1);
return (_sqrt(n , i + 1));
}
