#include <unistd.h>
#include "main.h"

/**
 * _string_toupper - check the code
 *
 * change all lowercase letters to upper
 *
 * @s: string
 *
 * Return: Always 0.
 */

char *string_toupper(char *s)
{
	int i = 0;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			if (s[i] == j)
			{
				s[i] = j - 32;
			}
		}
	}
	return (s);
}
