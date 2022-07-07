#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square, followed bya  new line
 * @n : The number of lines using '#' characters to use per 
 * row and column
 * Description: use # to pint the squares.
 * Return: Void.
 */
 
void print_square(int n)
{
	int x;
	int y;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
