#include "main.h"

/**
 * _isupper - function that checks input for a capital letter
 * @c : character that is tested
 * Return: 0 for small, 1 for capital
 */

int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		return (0);
}
