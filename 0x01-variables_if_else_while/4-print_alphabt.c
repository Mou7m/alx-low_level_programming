#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (seccess)
 */
int main(void)
{
	int i, a;

	a = 97;
	for (i = 0 ; i < 26; i++)
	{
	if (i != 16 && i != 4)
	{
	putchar(a + i);
	if (i == 25)
	{
	putchar('\n');
	}
	}
	}
	return (0);
}
