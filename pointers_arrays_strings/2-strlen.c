#include <stdio.h>
#include "main.h"
/**
* _strlen - returns the length of a string
*@s: variable that contains a string
*
* Description: returns the length of a string.
* Return: 0 if succes
*/
int _strlen(char *s)
{
	int contador = 0;

	while (s[contador])
		contador++;
	return (contador);
}
