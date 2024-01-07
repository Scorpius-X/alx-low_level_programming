#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints from 0 to 98
 * @n: integers
 */

void print_to_98(int n)
{
	n = 0;
	while (n <= 98)
	{
		if (n != 98)
		{
			printf("%i, ", n);
		}
		else
		{
			printf("%i", n);
		}
		n++;
	}
	printf("\n");
}
