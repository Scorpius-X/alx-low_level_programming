#include "main.h"
/**
 * print_times_table - prints any times table n
 *
 * @n: integers only
 */
void print_times_table(int n)
{

	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		putchar('0');
		for (j = 1; j <= n; j++)
		{
			if  (n > 15 || n < 0)
			{
				return;
			}
			putchar(',');
			putchar(' ');
			k = i * j;

			if ((k / 10) == 0)
			{
				putchar(' ');
				putchar((k / 10) + '0');
			}
			else
			{
				putchar((k / 10) + '0');
				putchar((k % 10) + '0');
			}
		}
		putchar('\n');
	}
}
