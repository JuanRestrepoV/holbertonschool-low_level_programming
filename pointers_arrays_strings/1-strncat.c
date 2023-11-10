#include <stdio.h>
#include "main.h"
/**
* _strncat - concatenates two strings
* @dest: pointer to destination string
* @src: pointer to source string.
* @n: number of bytes from source string that must be used to append.
*
* Description: function that concatenates two strings.
* Return: pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != src[n])
	{
		dest [a + b] = src[b];
		b++;
	}
	return (dest);
}
