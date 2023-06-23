#include <stdio.h>

/**
 *main - prints 1 - 100 followed by new lines
 *for multiples of three print fizz
 *for multiples of five print buzz
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && 1 % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && 1 % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
