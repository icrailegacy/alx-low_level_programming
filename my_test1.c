#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints the name and age of an individual
 * Return: Always 0
 */

int main(void)
{
	void myFunction(char name[], int age)
	{
		printf("Hello, my name is %s, and I am %d years old \n", name, age);
	}
	
	myFunction("Isaac", 30);
	myFunction("Craig", 31);
	myFunction("Katusabe", 30);
	
	return (0);

}
