#include <stdio.h>
#include "main.h"
/**
* factorial - returns the factorial of a given number.
* @n: holds number as parameter for the function.
*
* Description: returns the factorial of a given number.
* Return: factorial number.
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
