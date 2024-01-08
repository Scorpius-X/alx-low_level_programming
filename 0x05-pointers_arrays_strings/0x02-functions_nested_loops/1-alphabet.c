#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: prints all lowercase alphabets
 * Return:Always 0 (success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z';)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

