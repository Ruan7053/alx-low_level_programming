#include "main.h"

/**
 * times_table - Prints the 9 times tables
 *
 */
void times_table(void)
{
	int c;
	int t;

	for (c = 0; c <= 9; c++)
	{
		for (t = 0; t <= 9; t++)
		{
			int result = t * c;

			if (t == 0)
			{
				_putchar('0');
			} else if (result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}

		}
		_putchar('\n');
	}
}
