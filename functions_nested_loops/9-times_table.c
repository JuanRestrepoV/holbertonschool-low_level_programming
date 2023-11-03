#include <stdio.h>
#include "main.h"
/**
* times_table - print 9 times tables
*
* Description: Print 9 times table in specific format
*/
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			if (product <= 9)
			{
				_putchar(product + '0');
				if (column <= 8)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				if (column <= 8)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

		}
	_putchar ('\n');
	}
}
