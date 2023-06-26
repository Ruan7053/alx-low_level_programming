#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - puts half of istring
 *
 * @str: string to split in half
 */
void puts_half(char *str)
{
	int i;
	int t = 0;

	if (_strlen(str) % 2 != 0)
	{
		t += 1;
	}
	for (i = (_strlen(str) + t) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
