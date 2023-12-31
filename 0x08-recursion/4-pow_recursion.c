#include "main.h"

/**
 * _pow_recursion - raises a value to a power.
 * @x - value to be raised.
 * @y - power to be raised by.
 * Return : powered value.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
