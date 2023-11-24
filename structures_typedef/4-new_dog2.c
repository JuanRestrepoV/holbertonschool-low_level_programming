#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* new_dog - function that creates a new dog.
* @name: pointer to name of the new dog.
* @age: Age of the new dog.
* @owner: Owner of the new dog.
*
* Description: You have to store a copy of name and owner
* Return: structure type.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *DOG = malloc(sizeof(dog_t));
	if (DOG == NULL)
	{
		return (NULL);
	}
	DOG->name = strdup(name);
	DOG->owner = strdup(owner);
	if (DOG->name == NULL || DOG->owner == NULL)
	{
		free(DOG->name);
		free(DOG->owner);
		free(DOG);
		return (NULL);
	}
	DOG->age = age;
	return (DOG);
}
