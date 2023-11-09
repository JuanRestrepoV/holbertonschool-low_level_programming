#include <stdio.h>
#include "main.h"
/**
* puts_half - prints second half of string
* @str: pointer to string
*
* Description: prints second half of a string.
*/
void puts_half(char *str)
{
	int a, posit;

	a = 0;
	for (a = 0; str[a] != '\0'; a++)
	{
	}
	posit = a / 2;
	if (a % 2 == 1)
	{
	posit++;
	}	
	for (; posit < a; posit++)
	{
		putchar(str[posit]);
	}
	putchar('\n');
}
