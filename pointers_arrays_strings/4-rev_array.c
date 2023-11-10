#include "main.h"
/**
* reverse_array - reverses the content of an array of integers.
* @a: pointer to array of integers.
* @n: the number of index of the array
*
* Description: reverses the content of an array of integers.
*/
void reverse_array(int *a, int n)
{
	int temp, i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
