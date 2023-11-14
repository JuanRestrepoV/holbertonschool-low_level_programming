#include <unistd.h>
#include "main.h"
/**
* verif - Make the calculation of square root for a number n. 'x' = 'n'
* @x: the variable from first function that contains the number to calculate.
* @y: contains a starting int '1' to iterate with recursion.
*
* Description: function that prints a string in reverse.
* Return: -1 if theres no natural root.
*/
int verif(int x, int y)
{
	if (y * y > x)
	{
		return (-1);
	}
	if (y * y == x)
	{
		return (y);
	}
	return (verif(x, y + 1));
}
/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: number for calculation of square root.
*
* Description:  returns the natural square root of a number.
* Return: square root of number 'n'.
*/
int _sqrt_recursion(int n)
{
	return (verif(n, 1));
}
