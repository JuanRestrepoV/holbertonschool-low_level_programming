#include "main.h"
#include <stddef.h>
/**
* _strchr - locates a character in a string.
* @s: string that can hold char c that has to be located.
* @c: character to locate.
*
* Description: Returns a pointer to the first char c in the string s.
* Return: pointer to c char on string s.
*/
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != c; a++)
	{
	}
	if (s[a] == c)
	{
		return (&s[a]);
	}
	else
	{
		return (NULL);
	}
}
