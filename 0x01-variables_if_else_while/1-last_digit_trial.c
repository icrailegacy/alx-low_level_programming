
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
  int m;
	m = %n;
  
  srand(time(0));
	n = rand() - RAND_MAX / 2;
	
    if (m > 5)
      printnf("The last digit of %d is %d, and is greater than 5", n, m);
    else if (m < 5)
      printf("The last digit of %d is %d, and is less than 5", n, m);
  
  	return (0);
}
