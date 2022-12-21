#include "main.h"
/**
 * reverse_array - reverse function
 * @a: array
 * @n: number of byte
 */
void reverse_array(int *a, int n)
{
int i, j = 0;
n -= 1;
	while (n > j)
	{
		i = a[j];
		a[j] = a[n];
		a[n] = i;
		n--;
		j++;
	}
}

