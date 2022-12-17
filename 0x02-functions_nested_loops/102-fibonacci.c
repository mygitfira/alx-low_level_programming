#include <stdio.h>
/**
 *main - check the code
 *
 *Return: 0.
 */

int main(void)
{
int i, sum = 2, j = 1, k, l;
printf("%d, ", j);
	for (i = 1; i < 50; i++)
	{
		k = sum;
		l = j;
		printf("%d, ", sum);
		sum = sum + j;
		if (k > l)
			j = k;
	}
	printf("\n");
	return (0);
}
