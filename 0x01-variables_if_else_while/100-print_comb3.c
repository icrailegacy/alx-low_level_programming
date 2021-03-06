#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all possible combinations of two digits.
 * Description - Numbers must be separated by "," and a space.
 * 01 and 10 are considered the same combination of the two digits 0 and 1.
 * Print only the smallest combination of the 2 digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use the putchar function
 * You can only use putchar function a maximum of 5 times.
 * You are not allowed to use any variable of type "char".
 * Return: Always 0
 */

int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 100)
	{
		j = i % 10; /* singles digit */
		k = i / 10; /* doubles digit */

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
