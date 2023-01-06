#include <stdio.h>
/**
 * main - main function
 * @argc: size of array
 * @argv: arguents
 * Return: 0.
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
