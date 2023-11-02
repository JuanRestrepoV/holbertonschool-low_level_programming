#include <stdio.h>
#include "main.h"
/**
* _isalpha - checks if it is alphabetic
*@c: the letter to be checked
*
* Description: checks for lowercase and uppercase, if true return
* Return: 1 if it is lowercase or uppercase. 0 otherwise
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
