#include "main.h"

/**
 * main - prints lowercase alphabets
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int i;
	char a[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i != 27; i++)
	{
		_putchar(a[i]);
	}
	_putchar("\n");
}
