#include <stdio.h>
#include "main.h"
/**
* main - entry point
* Description: Validate last digit
* n: the number to be checked
* Return: Always 0 (Succes)
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

	return;
}
