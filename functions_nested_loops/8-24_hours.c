#include <stdio.h>
#include "main.h"
/**
* jack_bauer - print all the hours and minutes
*
* Description: Print all the clock
* Return: 0 if succes
*/
void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	m = 0;
	while (h <= 23)
	{
		while (m <= 59)
		{
			_putchar ((h / 10) + '0');
			_putchar ((h % 10) + '0');
			_putchar (':');
			_putchar ((m / 10) + '0');
			_putchar ((m % 10) + '0');
			_putchar ('\n');
		m++;
		}
		h++;
		m = 0;
	}
}
