#include "main.h"

/**
 *print_line - print straight line
 *@n: number of times char should be printed
 */
void print_line(int n)
{
	if (n < 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
