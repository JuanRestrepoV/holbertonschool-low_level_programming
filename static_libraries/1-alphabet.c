#include <stdio.h>
#include "main.h"
/**
* print_alphabet - print alphabet lower case
*/

void print_alphabet(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	putchar('\n');
}
