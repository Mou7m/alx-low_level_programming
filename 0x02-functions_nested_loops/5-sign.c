#include "main.h"

/**
 *print_sign - check if n positive or negative or zero.
 *@n : number.
 *Return: - if negative or + if positive or 0 if zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
