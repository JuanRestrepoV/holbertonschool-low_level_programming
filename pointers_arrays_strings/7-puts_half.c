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
	int a;

	a = 0;
	for (a = 0; str[a] != '\0'; a++)
	{
	}
	if (a % 2 == 1)
	{
		a = (a - 1) / 2;
	}
	else
	{
		a = (a / 2);
	}
	for (; str[a] != '\0'; a++)
	{
		putchar(str[a]);
	}
	putchar('\n');
}
