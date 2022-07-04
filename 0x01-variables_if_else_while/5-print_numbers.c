#include <stdlib.h>
#include <stdio.h>

/**
 * main - print numbers
 * Description: print single-digit numbers of base 10, starting from 0
 * Return: always 0
 */

int main(void)
{
	int c = 0;

	while (c <= 9)
	{
		printf("%i", c);
		c++;
	}

	return (0);
}
