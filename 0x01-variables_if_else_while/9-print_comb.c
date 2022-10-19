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

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
	}
