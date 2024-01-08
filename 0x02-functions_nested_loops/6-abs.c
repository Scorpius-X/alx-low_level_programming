#include "main.h"
/**
 * _abs - calculates the absolute value
 *
 * @n:  integer
 *
 * Return: always 0 success
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
