#include "main.h"
/**
* _memset - Write a function that fills memory with a constant byte.
* @s: Pointer to buffer memory address where 'b' value will be fill 'n' times.
* @b: Value that will replace the values at buffer 's'.
* @n: Number of bytes (times) that 'b' value will be replace in 's' buffer.
*
* Return: modified buffer.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
