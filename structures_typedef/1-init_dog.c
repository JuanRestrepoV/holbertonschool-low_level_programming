#include "dog.h"
#include <stdio.h>
/**
* init_dog - initialize a variable of type struct dog.
* @d: pointer to the structure already made.
* @name: name of dog.
* @age: Age of dog.
* @owner: Owner of dog
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
