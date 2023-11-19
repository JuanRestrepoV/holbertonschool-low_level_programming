#include <stdio.h>
#include "main.h"
/**
* _islower - checks for lowercase
*@c: the letter to be checked
*
* Description: checks for lowercase, if is lowercase print 1
* Return: 1 if it is lowercase. 0 otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
