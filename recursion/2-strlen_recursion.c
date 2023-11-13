#include <stdio.h>
#include "main.h"
/**
* _strlen - returns the length of a string
*@s: variable that contains a string
*
* Description: returns the length of a string.
* Return: 0 if succes
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return 1 + _strlen_recursion(s + 1);
}
