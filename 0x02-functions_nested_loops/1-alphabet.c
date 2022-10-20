#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - check the code
 *
 * prints the letters of the alphabet in lowercase
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
