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
	char *string;
	unsigned int s1_len, s2_len, i, j;

	s1_len = 0, s2_len = 0;
	if (s1 != NULL)
	{
		while (s1[s1_len])
		{
			s1_len++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[s2_len])
		{
			s2_len++;
		}
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}
	string = malloc(sizeof(char) * (s1_len + n + 1));

	i = 0, j = 0;
	if (string == NULL)
	{
		return (NULL);
	}	
	if (s1 != NULL)
	{
		for (i = 0; i < s1_len; i++)
		{
			string[i] = s1[i];
		}
	}
	for (j = 0; j < n; j++)
	{
		string[i++] = s2[j];
	}
	string[i] = '\0';
	return (string);
}
