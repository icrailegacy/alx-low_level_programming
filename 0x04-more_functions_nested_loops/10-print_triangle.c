#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Print triangle dependent on the parameter size.
 * Description: You can only use _putchar function to print
 * Where size is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 * @size : The height of the triangle
 * Return: Void.
 */

void print_triangle(int size)
{
	int i;
	int x;
	int spaces;
;
	for (i = 0; i < size; i++)
	{
		for (spaces = size - 1 - i; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (x = 0; x <= i; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
