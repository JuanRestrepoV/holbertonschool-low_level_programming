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
	char l;

	n = '0';
	l = 'a';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar ('\n');
	return (0);
}
