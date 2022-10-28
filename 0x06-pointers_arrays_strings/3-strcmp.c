#include "main.h"

/**
 * *_strcmp - compares strings to pointers
 *
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
