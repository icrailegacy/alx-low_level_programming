#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - like a hello world
 * Description: You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 * @n: params an integer
 * No return
 */

void print_number(int n)
{

	unsigned int n1 = 0;

	if  (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}

	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');
}
