#include <stdio.h>

/**
 * main - entry point
 *
 * entry point explained
 * Return: Always 0 Success
 **/
int main(void)
{
	int number = 0;
	char alpha = 'A';

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}
	while (alpha <= 'F')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
	}
