#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10;)
	{
		printf("%d", a);
		a++;
	}
	putchar('\n');
	return (0);
}
