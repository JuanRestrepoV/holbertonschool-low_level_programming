#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* _calloc - allocates memory for an array, using malloc.
* @nmemb: number of elements of the array.
* @size: type of elements.
*
* Description: The _calloc function allocates memory for
* an array of nmemb elements of size bytes each and returns
* a pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * sizeof(size));

	if (array == NULL)
	{
		return (NULL);
	}
	if (array != NULL)
	{
		memset(array, 0, nmemb);
	}
	return (array);
}
