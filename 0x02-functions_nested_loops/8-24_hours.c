#include "main.h"
/**
 * jack_bauer - prints time in 24minutes
 */

void jack_bauer(void)
{
	int time;

	for (time = 0; time < 1440; time++)
	{
		putchar((time / 60) / 10 + '0');
		putchar((time / 60) % 10 + '0');
		putchar(':');
		putchar((time % 60) / 10 + '0');
		putchar((time % 60) % 10 + '0');
		putchar('\n');
	}
}

