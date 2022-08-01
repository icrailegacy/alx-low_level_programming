#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free up the memory used by dog's account
 * @d: pointer to dog's account (struct)
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
