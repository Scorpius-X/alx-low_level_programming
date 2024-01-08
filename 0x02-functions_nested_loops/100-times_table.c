#include "main.h"
/**
 * print_times_table - prints any times table n
 *
 * @n: integers only
 */
void print_times_table(int n)
{

	int i, j, k;

	if  (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			k = i * j;

			if ((k / 10) == 0)
			{
				_putchar(' ');
				_putchar((k % 10) + '0');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
