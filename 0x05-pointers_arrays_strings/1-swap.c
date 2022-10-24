#include <unistd.h>
#include "main.h"

/**
 * swap_int - check the code
 *
 * swap values of pointers a and b
 *
 * @n - the pointer
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
