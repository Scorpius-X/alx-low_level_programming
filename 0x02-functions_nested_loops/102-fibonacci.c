#include <stdio.h>
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
	count = 2;

	printf("%lu, %lu, ", i, j);

	while (count <= 50)
	{
		k = i + j;
		printf("%lu", k);
		if (count != 50)
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
