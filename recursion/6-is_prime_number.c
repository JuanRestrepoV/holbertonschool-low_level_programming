#include <unistd.h>
#include "main.h"
/**
* check - check if n number is prime.
* @x: variable that contains the 'n' value
* @y: number to iterate with recursion
*
* Description: calculate if it is prime number.
* Return: 1 if prime or 0 if not prime
*/
int check(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	return (check(x, y + 1));
}
/**
* is_prime_number - returns 1 if the input integer is a prime number.
* @n: number to check for
*
* Description: function that returns 1 if the input integer is a prime number.
* Return: 1 if the input integer is a prime number.
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check(n, 2));
}
