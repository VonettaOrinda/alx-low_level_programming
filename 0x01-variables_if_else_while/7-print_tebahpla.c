#include <stdio.h>

/**
*main - Prints the lowercase alphabet in reverse.
*
*Return: Success always 0.
*/

int main(void)
{
	char str;
	for (str = 'z'; str >= 'a'; str--)
	{
		putchar(str);
	}
	putchar('\n');
	return (0);
}

