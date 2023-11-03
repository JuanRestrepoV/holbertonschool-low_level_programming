#include <stdio.h>
#include "main.h"
/**
* print_to_98 - print n to 98
* @n: variable to be print
*
* Description: Print 9 times table in specific format
*/
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}
	while (n <= 97)
	{
		printf("%d, ", n);
		n++;
		if (n == 98)
		{
			printf("%d", n);
		}
	}
	while (n >= 99)
	{
		printf("%d, ", n);
		n--;
		if (n == 98)
		{
			printf("%d", n);
		}
	}
	putchar('\n');
}
