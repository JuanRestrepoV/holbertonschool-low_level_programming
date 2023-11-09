#include <stdio.h>
#include "main.h"
/**
* print_array - prints n elements of an array of integers
* @a: pointer to string
* @n: number of arrays of the string
*
* Description: prints n elements of an array of integers
*/
void print_array(int *a, int n)
{
	int b;

	b = n;
	n = 0;
	while (n < (b - 1))
	{
		printf("%d, ", a[n]);
		n++;
	}
	if (n < b)
	{
		printf("%d", a[n]);
	}
	putchar('\n');
}
