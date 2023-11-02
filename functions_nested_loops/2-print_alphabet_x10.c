#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - print alphabet lower case 10 times
*
* Description: print alphabet lower cawse 10 times
*/
void print_alphabet_x10(void)
{
	int n;
	char i;

	for (n = '0'; n == '9'; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar (n);
		}
		_putchar ('\n');
	}
}
