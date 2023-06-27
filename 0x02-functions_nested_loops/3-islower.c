#include "main.h"
/**
 *_is-lower - shows 1 if input is a
 * Return - 1 if lowercase then 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97  && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
