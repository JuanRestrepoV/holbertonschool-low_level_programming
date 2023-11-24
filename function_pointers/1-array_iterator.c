#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
* array_iterator - function that executes a function given as a parameter 
* on each element of an array..
* @array: array to apply the action
* @size: Size of the array of type size_t
* @action: pointer to function that will be apply to the array.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	/**Iteramos i mientras sea menor que el tama;o
	del string entrara al bloque de codigo*/
	for (i = 0; i < size; i++)
	{
		action(array[i]);
		/** llamamos al puntero hacia la funcion 'action' que se
		*se aplicara en cada iteracion del string*/
	}
}
