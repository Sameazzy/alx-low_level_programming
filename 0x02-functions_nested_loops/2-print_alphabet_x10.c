#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10(void) - check the code
 *
 * prints the letters of the alphabet in lowercase 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void);
{
	int i = 0;

	while (i <= 10)
	{
		print_alphabet();
		i++;
	}
	_putchar('\n');
}
