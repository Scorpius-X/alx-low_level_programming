#include "main.h"
/**
 * print_sign - Write a function that prints the sign of a number.
 *
 * @n: The character in ASCII code
 *
 * Return: 1 for positive. -1 for negative. 0 for the rest.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
