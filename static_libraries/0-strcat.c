#include <stdio.h>
#include "main.h"
/**
* _strcat - concatenates two strings
* @dest: pointer to dest string.
* @src: pointer to src string.
*
* Description: concatenates two strings. DESTination and SRC.
* Return: pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	dest[a + b] = '\0';
	return (dest);
}
