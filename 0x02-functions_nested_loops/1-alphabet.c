#include "main.h"

/**
*print_alphabet - print the alphabet in lower case followed by a new line
*return: always 0
*/

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)

	{
		_putchar(c);
	}
	_putchar('\n');
}
