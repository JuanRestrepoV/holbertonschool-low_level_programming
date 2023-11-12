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
	while (*haystack != '\0')
	{
		while (*haystack != *needle)
		{
			haystack++;
		}
		return (haystack);
	}
	return (NULL);
}
