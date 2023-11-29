#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_all - function that prints anything
* @format: number of variables
* @...: indicator of variable arguments.
*/
void print_all(const char * const format, ...)
{
	int i, j = 0;
	char c;
	char *s;
	float f;
	va_list args;

	va_start(args, format);

	while (format && format[j])
	{
		switch (format[j])
	{
	case 'i':
		i = va_arg(args, int);
		printf("%d", i);
		break;
	case 'c':
		c = va_arg(args, int);
		printf("%c", c);
		break;
	case 's':
		s = va_arg(args, char*);
		printf("%s", s ? s : "(nil)");
		break;
	case 'f':
		f = va_arg(args, double);
		printf("%f", f);
		break;
	default:
		j++;
		continue;
	}
	if (format[j + 1])
	{
		printf(", ");
	}
		j++;
	}
	va_end(args);
	printf("\n");
}
