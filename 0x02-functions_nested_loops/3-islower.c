#include "main.h"

/**
 *_islower - Shows 1 if the c is lowcase.
 *'c' - is a parametre char.
 *Return: one or zero.
 */

int _islower(int c)
{
	int j;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
