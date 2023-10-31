#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - entry point
* Description: Validate last digit
* n: the number to be checked
* Return: Always 0 (Succes)
*/
int main(void)
{
	int n;
	int remain;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	remain = n % 10;
	if (remain > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, remain);
	}
	if (remain == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, remain);
	}
	if (remain < 6 && remain != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, remain);
	}

	return (0);
}
