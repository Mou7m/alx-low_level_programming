#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i, z;

	z = 122;
	for (i = 0; i < 26; i++)
	{
	putchar(z - i);
	if (i == 25)
	{
	putchar('\n');
	}
	}
	return (0);
}
