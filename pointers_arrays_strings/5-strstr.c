#include "main.h"
#include <stddef.h>
#include <stdio.h>
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
		char *start = haystack;

		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return start;
		}
		needle = needle - (haystack - start);
		haystack = start + 1;
	}
	return NULL;
}
