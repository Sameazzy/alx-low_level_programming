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
	int diff;

	if (s1[i] == s2[i])
	{
		return (0);
	}

	diff = s1[i] - s2[i];
	return (diff);
}
