#include "main.h"
#include <stdio.h>
/**
* rev_string - reverse a string
*@s: pointer that contains the string
*
* Description: Write a function that reverses a string
*/
void rev_string(char *s)
{
	int a;
	int j;
	int rev;

	for (a = 0; s[a] != '\0'; a++);/**a es = ultima posicion de *s*/
	for (j = 0; j < a / 2; j++)/**j recorre posiciones de *s hasta mitad*/
	{
		rev = s[j];/**rev es = posicion de j*/
		s[j] = s[a - 1 - j];/**j es = a la posicion de a - 1 - j*/
		s[a - 1 - j] = rev;/**el caracter en posicion a pasa a rev*/
	}
}
