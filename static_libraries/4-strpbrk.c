#include "main.h"
#include <stdio.h>
/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: pointer to string where the search occurs
* @accept: pointer to string that tell us what to search for.
*
* Description: function locates the first occurrence in the string s.
* Return: pointer to the byte in s that matches one of the bytes in accept.
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}
