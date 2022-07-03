#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all possible combinations of single-digit numbers.
 *Description - Numbers must be separated by commas and a space.
 * Numbers must be in ascending order
 * You can only use the putchar function 
 * You can only use putchar a maximum of four times.
 * You are not allowed to use any variable of type `char`.
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
