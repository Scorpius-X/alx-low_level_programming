#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints fizz buzz
 *
 * Return:Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ", i);
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ", i);
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ", i);
		}
		else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
	return (0);
}
