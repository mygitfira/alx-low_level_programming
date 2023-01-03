#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints buffer in hexa
 *@a: square matrix
 *@size: size of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
int i, j, sum = 0, sum1 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
sum += a[i * size + j];
if (i + j == size - 1)
sum1 += a[i * size + j];
}
}
printf("%d, %d \n", sum, sum1);
}
