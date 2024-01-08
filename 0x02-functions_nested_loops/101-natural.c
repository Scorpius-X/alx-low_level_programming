#include <stdio.h>
/**
 * main - prints multiples of 3 or 5 below 1024
 *
 * return: 0 always
 */

int main(void)
{
	int i;
	int sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0)||(i % 5 == 0))
		{
			sum+=i;
		}
		i++;
	}
	printf("%d", sum);
	return 0;
}
