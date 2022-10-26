#include "main.h"

/**
 * puts2 - prints a s7tring to standard output
 *
 * prints every other character in a string
 * @str: string parameter
 * Return: Always 0.
 */

void puts2(char *str)
{	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 1)
		{
			i++;
		}
		else
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
