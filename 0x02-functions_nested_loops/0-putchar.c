#include "main.h"

/**
 * main - entry point
 *
 * entry point explained
 * Return: Always 0 Success
 **/
int main(void)
{
	int j = 0;

	char str[] = "_putchar\n";
		while(str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}

	return (0);
}
