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
		char numberChar = number + '0';
		putchar(numberChar);
		number++;
	}
	putchar('\n');
	return (0);
	}
