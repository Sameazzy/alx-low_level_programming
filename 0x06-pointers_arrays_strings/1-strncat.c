#include <unistd.h>
#include "main.h"

/**
 * _strcat - check the code
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

	for  (j = 0; dest[j] != '\0'; j++)
	{
		j++;
	}
	i = 0;

	for  (i = 0; i < n; i++)
	{
		dest[j] = src[i];
		j++;
	}

	return (dest);
}
