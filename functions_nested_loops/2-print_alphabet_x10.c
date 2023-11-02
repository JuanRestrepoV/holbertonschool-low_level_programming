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
	int i;

	for (n = '0'; n <= '9'; n++)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar (i);
			i++;
		
		}
		_putchar ('\n');
	}
}
