#include <stdio.h>
#include "main.h"
/**
* _puts - prints a string.
* @str: variable that contains the string
*
* Description: function that prints a string, followed by a new line
*/
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
