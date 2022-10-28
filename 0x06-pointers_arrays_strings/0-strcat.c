#include <unistd.h>
#include "main.h"

/**
 * _strcat - check the code
 *
 * concatenate strings
 *
 * @dest: - destination
 * @src: - source
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	for  (j = 0; dest[j] != '\0'; j++)
	{
		j++;
	}
	i = 0;

	for  (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
