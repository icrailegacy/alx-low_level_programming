#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -> assign a random number to the variable n each tme it is run
 *and prints out whether the number is positive, zero or negative
 *return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
