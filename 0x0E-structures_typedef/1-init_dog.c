#include "dog.h"

/**
*init_dog: initialize a variable of type struct dog
* @d: the dog whose details we are to enter
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sideof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
