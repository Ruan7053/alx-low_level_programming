#include "main.h"

/**
 * _strlen - Measures the length of a string input
 * @s - Char input to measure
 *
 * Return: length of string (len)
 */
int _strlen(char *s)
{
	int len = 0;
	int k;

	for (k=0; s[k] != '\0'; k++)
	{
		len++;
	}
	return (len);
}
