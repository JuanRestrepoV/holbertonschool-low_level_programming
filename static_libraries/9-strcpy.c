#include <stdio.h>
#include "main.h"
/**
* _strcpy - copies the string pointed to by src
* @dest: pointer to new destination of string.
* @src: pointer to source string.
*
* Description: to the buffer pointed to by dest.
* Return: the string of characters that were copied to dest from src.
*/
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
