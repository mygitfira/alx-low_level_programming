#include "main.h"
#include <stdio.h>
/**
 *print_array - check the code
 *@a: parametre a
 *@n: parameter b
 */

void print_array(int *a, int n)
{
int i;
	for (i = 0; i < n; i++)
	{
		if ((i + 1) != n)
		printf("%d, ", a[i]);
		else
		printf("%d", a[i]);
	}
	printf("\n");
}
