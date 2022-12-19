#include "main.h"
/**
 *swap_int - check the code
 *@a: parametre a
 *@b: parameter b
 */

void swap_int(int *a, int *b)
{
int *c, v = 10;
c = &v;
*c = *a;
*a = *b;
*b = *c;
}
