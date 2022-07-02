#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lower case
 * Description: only use putchar funcction.
 * You can only use the putchar function 3 times.
 * Return: always 0
 */
int main(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
