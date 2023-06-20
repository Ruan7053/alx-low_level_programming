#include "main.h"

/**
 *
 * print_last_digit - prints the last digit of the input
 *
 * @r - input to return last digit from
 *
 * Return: last digit of r
 *
 */

int print_last_digit(int r)
{
	_putchar('0' + (r % 10));
	return (r % 10);
}
