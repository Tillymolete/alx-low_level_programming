#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Frees dogs
 * @d: the free dog
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);

	free(d);
}
