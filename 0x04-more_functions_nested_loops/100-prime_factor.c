#include <stdio.h>

/**
 * main - main function
 *
 * Return: returns 0 on success
 */
int main(void)
{
	unsigned int ui = 2;
	unsigned long ul= 612852475143;

	while (ui != ul)
	{
		if (ul % ui == 0)
		{
			ul = ul / ui;
		} else
		{
			ui++;
		}
	}
	printf("%lu\n", n);
	return (0);
}
