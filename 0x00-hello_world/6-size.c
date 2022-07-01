#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: 0 if executed properly, non-zero otherwise
 */
int main(void)
{
	printf("size of a char: %c byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
