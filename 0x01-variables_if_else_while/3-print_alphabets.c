#include <stdio.h>

/**
 * main - entry point
 *
 * entry point explained
 * Return: Always 0 Success
 **/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
