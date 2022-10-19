#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *removeChar - removes the said characters
 *@s: pointer
 *@c: character c
 */
void removeChar(char *s, char c)
{
	int writer = 0, reader = 0;
	while (s[reader])
	{
		if (s[reader] != c)
		{
			s[writer++] = s[reader];
		}
		reader++;
	}
	s[writer] = 0;

}

/**
 * main - Entry point
 *Return: All letters except q and e
 */

int main(void)
{
	char *str = malloc(strlen("abcdefghijklmnopqrstuvwxyz") + 1);
	strcpy(str, "abcdefghijklmnopqrstuvwxyz");
	removeChar(str, 'q');
	removeChar(str, 'e');
	printf("%s", str);
	free(str);
	putchar('\n');

	return (0);
}

