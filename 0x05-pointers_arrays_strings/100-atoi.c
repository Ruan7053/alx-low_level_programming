#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts string to integer
 * @s: string to convert to integer
 *
 * Return: returns converted integer value
 */
int _atoi(char *s)
{
	int n, d, p, digit, k, f;

	d = 0;
	n = 0;
	p = 0;
	digit = 0;
	k = 0;
	f = 0;

	while (s[p] != '\0')
		p++;
	while (k < p && f == 0)
	{

		if (s[k] == '-')
			++d;
		if (s[k] >= '0' && s[k] <= '9')
		{
			digit = s[k] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[k + 1] < '0' || s[k + 1] > '9')
				break;
			f = 0;
		}
		k++;
	}
	if (f == 0)
		return (0);
	return (n);	
}
