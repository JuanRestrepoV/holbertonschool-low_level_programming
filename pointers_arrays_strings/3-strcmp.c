#include "main.h"
/**
* _strcmp - Compare two strings
* @s1: First string
* @s2: Second string
*
* Return: An integer less than, equal to, or greater than zero.
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0') 
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
