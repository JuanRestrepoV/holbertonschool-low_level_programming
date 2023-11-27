#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
* sum_them_all - function that returns the sum of all its parameters
* @n: number of arguments.
* @...: indicator of variable arguments.
*
* Return: the total sum of n variable arguments.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	int total;

	if (n == 0)
	{
		return (0);
	}

	va_start(arguments, n);

	for (i = 0; i <= n; i++)
	{
		total += va_arg(arguments, int);
	}
	va_end(arguments);
	return (total);
}
