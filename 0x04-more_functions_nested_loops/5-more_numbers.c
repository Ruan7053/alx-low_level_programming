#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 *
 */

void more_number(void)
{
	int i;
	int a;

	for (a = 0; a <= 9; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 +'0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
