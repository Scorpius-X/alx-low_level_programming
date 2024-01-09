#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints a fibonacci
 *
 * Return:0
 */

int main(void)
{
	long int i, j, k;
	int count;

	i = 1;
	j = 2;
	count = 3;

	printf("%lu, %lu, ", i, j);

	while (count <= 98)
	{
		k = i + j;
		printf("%lu", k);
		if (count != 98)
		{
			putchar(',');
			putchar(' ');
		}
		i = j;
		j = k;
		count++;
	}
	putchar('\n');
	return (0);
}

