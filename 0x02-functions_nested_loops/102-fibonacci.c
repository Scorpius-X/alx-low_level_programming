#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints a fibonacci
 *
 * Return:0
 */

int main(void)
{
	long int i, j, k, count;

	i = 1;
	j = 2;

	while (count <= 50)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%ld", k);
		if (count != 50)
		{
			putchar(',');
			putchar(' ');
		}
		count++;
	}
	putchar('\n');
	return (0);
}
