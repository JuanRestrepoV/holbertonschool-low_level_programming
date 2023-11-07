#include <stdio.h>
#include "main.h"
/**
* print_last_digit - print last digit of a number
*@n: number compute
*
* Description: Print last digit of a positive or negative number
* Return: 0 if succes
*/
int _strlen(char *s)
{
	int contador = 0;

	while (s[contador])
		contador++;
	return (contador);
}
