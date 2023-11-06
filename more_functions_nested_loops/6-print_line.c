#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* print_line - print _ n times
* @n: times for print
*
* Description: print from _ n times
*/
void print_line(int n)
{
	int a;

	a = 1;
	while (n >= 1 && a <= n)
	{
		_putchar ('_');
		a++;
	}
	_putchar('\n');
}
