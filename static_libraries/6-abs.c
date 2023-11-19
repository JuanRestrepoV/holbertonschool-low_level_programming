#include <stdio.h>
#include "main.h"
/**
* _abs - compute absolute value
*@n: integer to be computed
*
* Description: Computes absolut value of a number
* Return: 0 if succes
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * (-1));
	}
}
