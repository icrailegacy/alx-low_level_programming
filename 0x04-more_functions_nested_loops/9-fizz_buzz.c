#include "main.h"
#include <stdio.h>

/**
 * main - Print numbers 1 to 100 but
 * print Fizz for multiples of 3 and
 * Buzz for multiples of 5, and FizzBuzz for multiples of both 3 & 5
 *
 * Return: Always 0
 */

int main(void)
{
	int x = 1;

	while (x < 101)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", x);
		}

		if (x != 100)
		{
		printf(" ");
		}
		x++;
	}
	printf("\n");
	return (0);
}
