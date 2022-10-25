#include "main.h"

/**
 * _puts - prints a string to standard output
 *
 * prints the string
 * @str: string parameter
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
