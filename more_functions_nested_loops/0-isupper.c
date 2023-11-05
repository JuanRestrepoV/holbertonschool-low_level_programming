#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* _isupper - check for uppercase
* @c: variable for checking
*
* Description: checks for uppercase
* Return: 1 if uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}

	_putchar ('\n');
}
