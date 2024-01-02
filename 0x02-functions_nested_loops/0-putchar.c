#include "main.h"

/**
 * main - ENtry point
 *
 * Return: always 0 success
 */

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i != 8; i++)
	{
		_putchar(p[i]);
	}
	return (0);
}
