#include <stdio.h>
/**
 *main - Entry point
 *description: printing both upper and lower case alphabets
 *Return: Always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while  (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
