#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: size of array
 * @argv: arguents
 * Return: 0.
 */

int main(int argc, char *argv[])
{
int i, sum = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
sum += atoi(argv[i]);
printf("%d\n", sum);
}
else if (argc == 1)
printf("0\n");
else
{
printf("Error\n");
return (1);
}
return (0);
}
