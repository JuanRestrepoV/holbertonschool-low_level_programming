#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - duplicates a string into another allocated manually with malloc
* @str: pointer to string that must be copy
*
* Description: duplicates a string into another allocated with malloc
* Return: pointer to new string that has the content of *str
*/
char *_strdup(char *str)
{
	char *duplicate;
	int a, b;

	if (str == 0)
	{
		return (NULL);
	}
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	duplicate = malloc((a + 1) * sizeof(char));
	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (b = 0; b <= a; b++)
	{
		duplicate[b] = str[b];
	}
	return (duplicate);
}
