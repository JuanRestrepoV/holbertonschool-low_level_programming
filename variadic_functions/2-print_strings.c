#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
* print_strings - function that prints chars,, followed by a new line
* @separator: pointer to char type string that must be printed between chars
* @n: number of chars
* @...: indicator of variable arguments.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string_s;
	char *string;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(string_s, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(string_s, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}
		if (i != n - 1 && string != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(string_s);
	printf("\n");
}
