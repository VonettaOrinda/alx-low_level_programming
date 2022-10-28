#include "main.h"

/**
 * *_strncat - concatenates the src to dest
 *
 * @dest: where the string is concatenated
 * @src: source
 * @n: int n
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; index < n && src[index] != '\0'; index++)
{
dest[dest_len++] = src[index];
}
dest[dest_len + index] = '\0';

return (dest);
}
