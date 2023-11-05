#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* _isdigit - check for digits
* @c: variable for checking
*
* Description: checks for uppercase
* Return: 1 if uppercase 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar ('\n');
}

