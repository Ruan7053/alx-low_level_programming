#include "main.h"
/**
 *print_alphabet - prints the alphabet
 *
 * Return: always 0;
 *
 */
void print_alphabet(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		_putchar(t);
	}
	_putchar('\n');
}
