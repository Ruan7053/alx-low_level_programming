#include "main.h"
/**
 * _islower - checks for lowercase letters
 *
 * @c: character that is tested
 *
 * Return: 1 if true, 0 if false
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z' )
	{
		return(1);
	}
	return(0);
}
