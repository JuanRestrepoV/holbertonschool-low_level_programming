#include <stdio.h>
#include "main.h"
/**
* _atoi - convert a string to an integer.
* @s: pointer to char
*
* Description: convert a string to an integer.
* Return: number contain in *s.
*/
int _atoi(char *s)
{
	int a, sign = 1, n = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
		{
			sign = sign * -1;
		}
		else if (s[a] >= 48 && s[a] <= 57)
		{
			break;
		}
	}
	for (; s[a] >= 48 && s[a] <= 57; a++)
	{
		n = (n * 10) + (s[a] - '0');
	}
	return (n * sign);
}
