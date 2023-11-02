#include <stdio.h>
#include "main.h"
/**
* print_sign - check the sign of a number
*@n: the number to be checked
*
* Description: checks for the sign of a number. If true return
* Return: 1 if positive, 0 if none, -1 if negative
*/
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
	return (0);
}
