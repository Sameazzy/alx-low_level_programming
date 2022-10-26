#include "main.h"

/**
 * rev_string - check code
 *
 * reverse string
 * @s: string parameter
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i;
	int j;
	char hold;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	for (j = 0; j < length / 2; j++)
	{
		hold = s[j];
		s[j] = s[length - j - 1];
		s[length - j - 1] = hold;
	}
}
