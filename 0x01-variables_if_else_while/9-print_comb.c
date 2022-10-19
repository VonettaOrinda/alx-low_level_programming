#include <stdio.h>

/**
 *main - Prints all base 16 numbers in lowercase
 * 
 *Return: Success always 0.
 */

int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
