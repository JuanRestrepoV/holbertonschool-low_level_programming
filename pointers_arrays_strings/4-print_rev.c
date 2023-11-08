#include <stdio.h>
#include "main.h"
/**
* print_rev - prints a string, in reverse
* @s: pointer that points to string
*
* Description: Write a function that prints a string, in reverse.
*/
void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0') /**este loop hace el conteo de chars del string*/
	{
		a++;/**hasta llegar al caracter nulo*/
	}
	a = a - 1;/** le restamos 1 a la posicion del caracter nulo*/
	while (a >= 0) /**al entrar a este loop 'a' no va a ser igual a '\0'*/
	{
		_putchar(s[a]);/**imprimos la ultima posicion del string*/
		a--;/**decrease desde la ultima posicion hasta la primera '0'*/
	}
	_putchar('\n');
}
