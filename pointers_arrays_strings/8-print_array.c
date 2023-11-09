#include <stdio.h>
#include "main.h"
/**
* puts2 - prints every other character of a string
* @str: pointer to string
*
* Description: prints every other character of a string.
*/
void print_array(int *a, int n)
{
	int b;

	b = n;
	n = 0;
	while(n < (b - 1))
	{
		printf("%d, ", a[n]);
		n++;
	}
	if(n < b)
	{
		printf("%d", a[n]);
	}
	putchar('\n');
}
