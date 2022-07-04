#include <stdio.h>
#include <stdio.h>

/**
 * main - Uses putchar to print all letters of the alphabet except 'q' and 'e'.
 * Description - writes a program that prints the alphabet in lower case
 * Return: always 0
 */

int main(void)
{
	int ch = 97;

	while (ch <= 122, ch != 101, ch != 113)
	{
		putchar(ch);
	}
	putchar(10);
	ch++;

	return (0);
}
