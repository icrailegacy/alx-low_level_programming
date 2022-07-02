#include <stdio.h>
#include <stdio.h>

/**
 * main - Uses putchar to print all letters of the alphabet except 'q' and 'e'.
 * Description - writes a program that prints the alphabet in lower case
 * Return: always 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
