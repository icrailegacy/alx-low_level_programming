#include <stdio.h>
#include <stdlib.h> 

/**
 * main - Print all possible different combinations of 3 digits.
 * Description - Numbers must be separated by commas and a space.
 * The 3 digits must be different.
 * 012, 120, 102, 021, 201, 210 are considered the same combination 0f 0 1 and 2.
 * print only the smallest combination of 3 digits.
 * Numbers should be printed in ascending order with 3 digits.
 * You can only use the putchar function
 * You can only use putchar a mximum of 6 times.
 * You are not allowed to use any variables of type char.
 * Return: Always 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100; /* hundreds */
		k = (i / 10) % 10; /* tens */
		l = i % 10; /* singles */

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
