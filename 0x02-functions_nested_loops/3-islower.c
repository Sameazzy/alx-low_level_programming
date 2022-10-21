#include <unistd.h>
#include "main.h"

 /*
  * _islower - entrypoint
  *
  * islower explained
  * Return: Always 0.
 */

int _islower(int c)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (c == ch)
		{
			return (1);
		}
		else
			ch++;
	}

	return (0);
}
