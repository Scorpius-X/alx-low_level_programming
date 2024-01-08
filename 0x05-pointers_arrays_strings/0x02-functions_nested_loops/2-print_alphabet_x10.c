#include "main.h"
/**
 *print_alphabet_x10 - Entry point.
 *Description: print 10 times alphabets in lower cases.
 *Return: Always 0 (success).
 */

void print_alphabet_x10(void)
{
	int i;

	char ch;

	ch = 0;
	while (ch < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		ch++;
		_putchar('\n');
	}
}

