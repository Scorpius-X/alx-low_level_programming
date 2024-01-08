#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always(0) success
 */

int main(void)
{
	int ch = 'a';
	int ph = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ph <= 'Z')
	{
		putchar(ph);
		ph++;
	}
	putchar('\n');
	return (0);
}

