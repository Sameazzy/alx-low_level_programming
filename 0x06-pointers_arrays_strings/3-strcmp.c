#include <unistd.h>
#include "main.h"

/**
 * _strcmp - check the code
 *
 * concatenate strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j;
	int diff;

	for (j = 0; s1[j] != '\0'; j++)
	{
		if (s2[i] != '\0')
		{
			if (s1[i] != s2[i])
			{
				diff = s1[i] - s2[i];
			}
			else
				i++;
		}
		else
		{
			diff = s1[i - 1] - s2[i - 1];
		}
	}

	return (diff);
}
