#include "main.h"

/**
 * _isupper - checks whether c is uppercase
 *
 * @c: param c
 * Return: return 1 if uppercase or 0 if otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
