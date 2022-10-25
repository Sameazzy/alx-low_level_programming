#include "main.h"

/**
 * _strlen - check the code
 *
 * prints the string length
 * @s: parameter
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);

}
