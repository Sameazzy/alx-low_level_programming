#include <unistd.h>
#include "main.h"

/**
 * _strncat - check the code
 *
 * concatenate strings
 *
 * @dest: destination
 * @src: source
 * @n: number of characters
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;
	int k = 0;

	for  (j = 0; dest[j] != '\0'; j++)
	{
		j++;
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		k++;
	}

	for  (i = 0; i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}

	if (k == n)
	{
		dest[j] = '\0';
	}
	return (dest);
}
