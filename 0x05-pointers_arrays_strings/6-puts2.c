#include "main.h"

/**
 * puts2 - prints a s7tring to standard output
 *
 * prints every other character in a string
 * @str: string parameter
 * Return: Always 0.
 */

void puts2(char *str)
{	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
			_putchar('\0');
	}
	_putchar('\n');
}
