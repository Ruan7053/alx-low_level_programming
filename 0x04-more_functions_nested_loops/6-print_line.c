#include "main.h"

/**
 * print_line - prints a line the length of input n
 * @n:  input length integer
 *
 */
void print_line(int n)
{
	int i;
	
	for  (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
