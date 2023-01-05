#include "main.h"
#include <stdio.h>
int _prime(int n, int i, int j);
/**
 * is_prime_number - function recurtion
 * @n: string
 * Return: length.
 */

int is_prime_number(int n)
{
if (n <= 1)
	return (0);
return (_prime(n, 1, 0));
}
/**
 * _prime - function recurtion
 * @n: string.
 * @i: string.
 * @j: string.
 * Return: length.
 */
int _prime(int n, int i, int j)
{
if (n % i == 0)
	j++;
if (j == 2 && i == n)
	return (1);
else if (j > 2 && i == n)
	return (0);
return (_prime(n, i + 1, j));
}
