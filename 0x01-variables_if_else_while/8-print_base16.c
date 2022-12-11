#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
	if (i < 10)
	{
	putchar(48 + i);
	}
	else if (i > 9)
	{
	putchar(87 + i);
	if (i == 15)
	{
	putchar('\n');
	}
	}
	}
	return (0);
}
