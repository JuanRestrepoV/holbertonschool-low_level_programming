#include "main.h"
#include <stddef.h>
/**
* _strstr - locates a substring.
* @haystack: First string
* @needle: Second string
*
* Description: finds first occurrence of substring needle in string haystack.
* Return: pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int b, c;

	b = 0;
	c = 0;
	while (haystack[b] != '\0')
	{
		while (haystack[b] != needle[c])
		{
			b++;
		}
		return (&haystack[b]);
	}
	return (NULL);
}
