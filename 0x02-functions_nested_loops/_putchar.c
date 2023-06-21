#include <main.h>
#inlcude <unistd.h>
/**
 *_putchar - writes c characters in stdout
 *@c: the character to print
 *return: on success 1
 *on error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, %c, 1));
}
