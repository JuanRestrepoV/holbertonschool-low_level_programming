#include <stdlib.h>
#include <stdlib.h>
#include "dog.h"
/**
* free_dog - function that frees dogs
* @d: pointer to struct
*
* Description: function that frees dogs.
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
