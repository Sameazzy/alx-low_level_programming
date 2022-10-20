#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * prints the letters of the alphabet in lowercase 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	char ch = 'a';

	for (i = 0 ; i < 10 ; i++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		ch = 'a';
	}
}
