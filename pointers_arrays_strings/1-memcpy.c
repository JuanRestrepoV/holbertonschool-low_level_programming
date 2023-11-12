#include "main.h"
/**
*_memcpy - copies memory area.
* @dest: destination memory area.
* @src: source memory area.
* @n: number of bytes (times) of source memory area to copy on dest.
*
* Description: copies n bytes from memory area 'src' to 'dest' memory area.
* Return: Pointer to dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
