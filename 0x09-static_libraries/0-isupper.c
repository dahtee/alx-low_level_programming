#include "main.h"

/**
 *_isupper - uppercase letters
 * @c : char to be checked
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
