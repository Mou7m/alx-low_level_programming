#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i, a, A;

	a = 97;
	A = 65;
	for (i = 0; i < 52 ; i++)
	{
	if (i < 26)
	{
	putchar(a + i);
	}
	else if (i > 25)
	{
	putchar(A + i - 26);
	if (i == 51)
	{
	putchar('\n');
	}
	}
	}
	return (0);
}
