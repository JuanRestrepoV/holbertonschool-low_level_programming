#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* malloc_checked - Allocate memory using malloc
* @b: Size of memory to allocate
*
* Return: Pointer to allocated memory exits with status 98 if
* allocation fails
*/
void *malloc_checked(unsigned int b)
{
	void *pter = malloc(b);

	if (pter == NULL)
	{
		exit(98);
	}
	return (pter);
}
