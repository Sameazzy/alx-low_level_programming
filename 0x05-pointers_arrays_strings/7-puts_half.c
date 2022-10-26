#include "main.h"

/**
 * puts_half - check code
 *
 * prints the string in reverse order
 * @str: string parameter
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i;
	int j;
	int length = 0;
	int start;

	for (j = 0; str[j] != '\0'; j++)
	{
		length++;
	}

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length / 2) + 1;

	for (i = start; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
