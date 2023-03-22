#include "main.h"
/**
 * times_table - print time table
 */

void times_table(void)
{
	int x, y, z;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			z = x * y;
			if (z < 10)
			{
				_putchar(z + '0');
				if (y == 9)
					break;
				_putchar(',');
				_putchar(' ');
				if ((z + x) < 10)
				_putchar(' ');
			}
			else
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
					if (y == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			y = y + 1;
		}
		_putchar('\n');
		x = x + 1;
	}

}
