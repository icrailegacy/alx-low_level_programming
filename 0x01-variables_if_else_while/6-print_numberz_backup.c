#include <stdlib.h>
#include <stdio.h>

/**
 * main - print all single digit numbers of base 10 starting with 0
 * Description: you are not allowed to use any variable of type char.
 * You can only use putchar function.
 * You can only use putchar twice.
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
