#include "main.h"

/**
 * print_diagonal - prints diagonally
 *
 * @n:integer
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
		{
			_putchar('\n');
		}
	}
