#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints a fibonacci
 *
 * Return:0
 */

int main(void)
{
	long int i, j, k, sum;
	int count;


	i = 1;
	j = 2;
	count = 2;
	sum = 2;

	while (count <= 50)
	{
		k = i + j;
		if ((k % 2 == 0) && (k < 4000000))
		{
			sum += k;
		}
		i = j;
		j = k;
		count++;
	}
	printf("%lu", sum);
	putchar('\n');
	return (0);
}
