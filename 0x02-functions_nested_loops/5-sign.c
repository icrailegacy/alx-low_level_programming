#include "main.h"

/**
 * print_sign - Checks the sign of a humber
 * @n: An input number
 * Description: use the _putchar function
 * Return: 1 if number is positive and print "+"
 * returns 0 if number is 0, 
 * returns -1 if number is less than 0 and prints "-" 
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
