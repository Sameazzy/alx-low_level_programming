#include <stdio.h>

/**
 * main - entry point
 *
 * entry point explained
 * Return: Always 0 Success
 **/
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'e' )
		{
			putchar(lower);
		}
		lower++;
	}
	putchar('\n');
	return (0);
	}
