#include "main.h"

/**
 * print_times_table - times table function
 * @n: integer to return
 *
 */
void print_times_table(int n)
{
	int c;
	int t;

	if (n <= 15 && n >= 0)
	{
		for (c = 0; c <= n; c++)
		{
			for (t = 0; t <= n; t++)
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
					_putchar(' ');
					_putchar('0' + result);
				} else if (result > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (result / 100));
					_putchar('0' + ((result / 10) % 10));
					_putchar('0' + (result % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (result / 10));
					_putchar('0' + (result % 10));
				}
			}
			_putchar('\n');
		}
	}
}

