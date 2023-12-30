#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return 0;
}
