#include "main.h"
/**
 * print_sign - prints the sign of the value entered
 *
 * @n - character that will be tested
 *
 * Return: 1 if the sign is positive, 0 if zero, -1 if the sign is negative
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return(1);
	}
	if (n < 0)
	{
		_putchar('-');
		return(-1);
	}
	_putchar('0');
	return(0);
	

}
