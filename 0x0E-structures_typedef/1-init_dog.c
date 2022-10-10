#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: poiter to the variable
 * @name: name
 * @age: age
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
