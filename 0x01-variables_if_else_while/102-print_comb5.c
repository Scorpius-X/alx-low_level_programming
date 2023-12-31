#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1, num2;
	int digit1, digit2;

	for (num1 = 0; num1 < 10; num1++){
		for (num2 = 0; num2 < 10; num2++){
			for (digit1 = 0; digit1 < 10; digit1++) {
				for (digit2 = 0; digit2 < 10; digit2++) {
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(' ');
					putchar(digit1 + '0');
					putchar(digit2 + '0');
					if (digit1 < 9 || digit2 < 9) {
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

