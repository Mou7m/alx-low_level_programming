#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
	putchar(alphabet[i]);
	if (i == 25)
	{
	putchar('\n');
	}
	}
	return (0);
}
