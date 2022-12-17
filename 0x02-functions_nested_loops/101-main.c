#include <stdio.h>
/*
 * natural - the begininng of excution
 *@n: natural numbers
 * return - always 0
 */

int natural(int n)
{
	int i, sum = 0;
	for (i = 1; i < n; i ++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d ", sum);
}
