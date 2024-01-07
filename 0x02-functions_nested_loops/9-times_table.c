#include "main.h"
/**
 * times_table - prints 9 times table
 *
 * Return: no return
 */

void times_table(void)
{
	int i, n, product;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (n = 1; n < 10; n++)
		{
			_putchar(',');
			_putchar(' ');
			product = i * n;

			if ((product / 10) == 0)
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
	return (0);
}
