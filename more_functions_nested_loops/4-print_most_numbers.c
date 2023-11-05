#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* print_most_numbers - print form 0 to 9
*
* Description: print from 0 to 9 except 2 and 4
*/
void print_most_numbers(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		if (n != '2' && n != '4')
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}
