#include "dog.h"
#include <stdlib.h>

/**
 *init_dog - function initiablizes a variable type of struct dong
 *@d: data structure
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
