#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}

	putchar('\n');
	return (0);

}

