#include "main.h"

/**
 * _isaplha - checks the input character if it is alphabetic
 *
 * @c: character that is tested
 *
 * Return: 1 if true, 0 if false
 *
 */
int _isplha(int c)
{
	if ((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
