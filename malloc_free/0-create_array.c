#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* create_array -  prints all arguments it receives.
* @size: argument count
* @c: argument vector
*
* Description: creates an array of chars, and initializes it with a specific
* Return: char
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		array[a] = c;
	}
	return (array);
}
