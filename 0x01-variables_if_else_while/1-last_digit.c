#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 *
 */

int main(void)
{

int n;
int m;
	srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
	if (m > 5)
	{
	   printf("Last digit of %d is %d is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
	   printf("Last digit of %d is %d is 0\n", n, m);
	}
	else
	{
	   printf("Last digit of %d is %d is less than 6 and not 0\n", n, m);
	}
	return (0);
}
