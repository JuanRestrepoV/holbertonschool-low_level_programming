#include <stdio.h>
#include "main.h"
/**
* swap_int - swap values of variables
*@a: first variable
*@b: second variable
*
* Description: swap values of variable a for b
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
