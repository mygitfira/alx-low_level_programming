#include "main.h"

/**
 *print_last_digit - Entry point
 * @p: character to be checked
 *Return: Always 0 (Success)
 */

int print_last_digit(int p)
{
int i = p % 10;
if (i < 0)
i = i * -1;
_putchar(i + '0');
return (i);
}
