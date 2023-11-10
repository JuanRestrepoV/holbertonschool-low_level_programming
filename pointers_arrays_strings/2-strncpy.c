#include <stdio.h>
#include "main.h"
/**
* _strncpy - function that copies a string.
* @dest: pointer to destination string
* @src: pointer to source string.
* @n: number of bytes from source string that must be used to copy.
*
* Description: function that copies a string.
* Return: pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
