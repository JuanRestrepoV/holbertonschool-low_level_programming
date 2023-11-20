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
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	string = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (string == NULL)
	{
		return (NULL);
	}
	strcpy(string, s1);
	if (strlen(s2) == n)
	{
		strcat(string, s2);
		return (string + '\0');
	}
	i = 0;
	while (s2[i] != s2[n])
	{
		strcat(string, s2[i])
		i++;
	}
	return (string + '\0')

