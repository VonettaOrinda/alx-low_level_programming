#include "main.h"

/**
 * times table - prints the multiplication table from 0-9
 *
 */

void times_table(void)
{
int j, k, prod;

for (j = 0; j <= 9; j++)
{
_putchar('0');

for (k = 1; k <= 9; k++)
{
_putchar(',');
_putchar(' ');

prod = j * k;

if (prod <= 9)

_putchar(' ');

else

_putchar((prod / 10) + '0');

_putchar((prod % 10) + '0');



}
_putchar('\n');
}
}
