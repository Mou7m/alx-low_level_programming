#include "main.h"

/**
 *print_alphabet_x10- print alphabets in lowcase 10 times.
 *
 *Return: Void.
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i < 11; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
