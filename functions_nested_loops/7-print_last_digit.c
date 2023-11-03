#include <stdio.h>
#include "main.h"
/**
* print_last_digit - print last digit of a number
*@n: number compute
*
* Description: Print last digit of a positive or negative number
* Return: 0 if succes
*/
int print_last_digit(int n)
{
	if (n >= 0)
	{
		n  = n % 10;
		_putchar (n + '0');
	}
	else
	{
		n = (n % 10) * (-1);
		_putchar (n + '0');
	}
	return (n);
}
