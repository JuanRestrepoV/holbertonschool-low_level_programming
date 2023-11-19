#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* more_numbers - print from 0 to 14
*
* Description: print from 0 to 14 10 times
*/
void more_numbers(void)
{
	int n;
	int o;

	o = 0;
	while (o <= 9)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
		o++;
	}
}
