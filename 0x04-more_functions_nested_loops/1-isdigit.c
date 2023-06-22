#include "main.h"

/**
 * _isdigit - determines if input is a number
 * @c: character that is tested
 *
 * Return: 0 if false, 1 if true
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
