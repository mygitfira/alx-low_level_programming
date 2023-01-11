#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function hold row and column
 * @width: column
 * @height: row
 * Return: nothing.
 */
int **alloc_grid(int width, int height)
{
int **matrix, i, j;
matrix = (int **) malloc(sizeof(int *) * (height));
if (matrix == NULL)
	return (NULL);
for (i = 0; i < height; i++)
{
	matrix[i] = (int *) malloc(sizeof(int) * (width));
if (matrix[i] == NULL)
{
	free(matrix);
	for (j = 0; j <= i; j++)
		free(matrix[j]);
	return (NULL);
}
}
i = 0;
while (i < height)
{
	j = 0;
	while (j < width)
	{
		matrix[i][j] = 0;
		j++;
	}
	i++;
}
return (matrix);
}
