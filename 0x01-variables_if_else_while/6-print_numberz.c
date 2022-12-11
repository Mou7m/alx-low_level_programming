#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i, zero;

	zero = 48;
	for (i = 0; i < 10; i++)
	{
	putchar(zero + i);
	if (i == 9)
	{
	putchar('\n');
	}
	}
	return (0);
}
