#include "dog.h"
#include <stdio.h>

/**
 *init_dog: initialize a variable of type struct dog
 * @d: the dog whose details we are to enter
 * @name: pointer to char name's dog
 * @age: age's dog
 * @owner: pointer to char string of dog owner's name
 * Return: No.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
