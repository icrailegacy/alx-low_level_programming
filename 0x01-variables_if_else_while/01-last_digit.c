#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - assigns random number to the variable n and prints the last digit
*Return: always 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);
	if (n > 5)
	{
		printf("greater than 5");
	}
	if (n == 0)
	{
		printf("0");
	}
	if (n < 0 && n != 0)
	{
		printf("and is less than 6 and not 0");
	}

	printf("\n");

	return (0);
}
