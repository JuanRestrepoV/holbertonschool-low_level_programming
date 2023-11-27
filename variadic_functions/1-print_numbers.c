#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
* print_numbers - function that prints numbers, followed by a new line
* @separator: pointer to char type string that must be printed between numbers
* @n: number of arguments
* @...: indicator of variable arguments.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;
	int num;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}
