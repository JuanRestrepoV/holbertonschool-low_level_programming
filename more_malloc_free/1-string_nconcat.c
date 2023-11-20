#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* string_nconcat - function that concatenates two strings
* @s1: first string to allocate
* @s2: second string to concatenate.
* @n: number of bytes from 's2' to concat with 's1'
*
* Description: The returned pointer shall point to a newly
* allocated space in memory, which contains s1, followed by
* the first n bytes of s2, and null terminated
* Return: char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len;
	char *ccat_str;

	if (s1 != NULL)
	{
		s1_len = strlen(s1);
	}
	else
	{
		s1_len = 0;
	}
	if (s2 != NULL)
	{
		s2_len = strlen(s2);
	}
	else
	{
		s2_len = 0;
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}
	ccat_str = malloc((s1_len + n + 1) * sizeof(char));

	if (ccat_str == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(ccat_str, s1);
	}
	else
	{
		ccat_str[0] = '\0';
	}
	strncat(ccat_str + s1_len, s2, n);
	ccat_str[s1_len + n] = '\0';
	return (ccat_str);
}
