#include "main.h"
/**
 *jack_bauer - prints his 24hrs time
 *h for hours , m for minutes
 *return: 0
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0 ; h < 24 ; h++)
	{
		for (m = 0 ; m < 60 ; m++)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}
