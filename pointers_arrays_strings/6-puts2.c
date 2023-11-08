#include <stdio.h>
#include "main.h"
/**
* puts2 - prints every other character of a string
* @str: pointer to string
*
* Description: prints every other character of a string.
*/
void puts2(char *str)
{
	int conteo;

	conteo = 0;
	while (str[conteo] != '\0')
	{
		_putchar (str[conteo]);
		conteo++;
		if (str[conteo] == '\0')
		{
			_putchar ('\n');
			return;
		}
		conteo++;
	}
	_putchar ('\n');
}
