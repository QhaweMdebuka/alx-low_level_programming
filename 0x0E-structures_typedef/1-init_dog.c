#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes struct dog
 * @d: is a pointer that has been stored with the name dog to it
 * @name: is the name to be intializes
 * @age: is the age to be intialized
 * @owner: is the owner to be initialized
 * the three varibale names have been derefernced
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
