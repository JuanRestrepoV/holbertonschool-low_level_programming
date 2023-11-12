#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: First string
* @accept: Second string
*
* Description: initial segment of s which consist only of bytes from accept
* Return: unsigned int number of times that accept appears on s prefix..
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	int b, c;

	for (b = 0; s[b] != '\0'; b++)
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[b] == accept[c])
			{
				a++;
				break;
			}
			
		}
		if (accept[c] == '\0')
		{
			return (a);
		}
	}
	return (a);
}
