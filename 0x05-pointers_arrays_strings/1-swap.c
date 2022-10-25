#include <unistd.h>
#include "main.h"

/**
 * swap_int - check the code
 *
 * swap values of pointers a and b
 *
 * @a - pointer a
 * @b - pointer b
 * @c - int c
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
