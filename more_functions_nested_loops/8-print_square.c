#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* print_square - print square
* @size: size (i x j) of the square
*
* Description: print square using '#'
*/
void print_square(int size)
{
	int i, j;

	i = 0;
	j = 0;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (j < size)
	{
		for (i = 0; i < size; i++)
		{
			_putchar ('#');
		}
		_putchar('\n');
		j++;
	}
}
