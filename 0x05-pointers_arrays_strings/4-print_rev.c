#include "main.h"

/**
 * print_rev - check code
 *
 * prints the string in reverse order
 * @s: string parameter
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;
	int j;
	int length = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
