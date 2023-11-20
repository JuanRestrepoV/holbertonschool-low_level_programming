#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* array_range - function that creates an array of integers.
* @min: min value of type (int) to full the new allocation.
* @max: max value of type (int) to full the new allocation
*
* Description: The array created should contain all the
* values from min (included) to max (included),
* ordered from min to max
* Return: the pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *str;
	int size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	str = malloc(size * sizeof(int));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = min + i;
	}
	return (str);
}
