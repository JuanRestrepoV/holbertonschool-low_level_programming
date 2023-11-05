#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* print_numbers - print form 0 to 9
*
* Description: print from 0 to 9
*/
void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
