#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the alphabet in lowercase followed by a new line
 *Return: always 0
 */

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	putchar(10);

	return (0); /* return is always 0 */
}
