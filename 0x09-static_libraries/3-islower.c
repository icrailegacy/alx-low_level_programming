#include "main.h"

/**
 * _islower - Checks if a character is lower case and returns 1
 * @c: An input character
 * Description: uses _putchar function
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
