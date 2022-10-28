#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 *
 * @a: an array of integers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
int i, temp;

for (i = n - 1; i >= n / 2; i--)
{
temp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = temp;
}
}
