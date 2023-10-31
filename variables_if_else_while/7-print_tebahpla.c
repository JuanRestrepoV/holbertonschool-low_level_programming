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
	char n;

	n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar ('\n');
	return (0);
}
