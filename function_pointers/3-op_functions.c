#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* op_add - addition
* @a: operator a
* @b: opeartor b
*
* Return: integer
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
* op_sub - substraction
* @a: operator a
* @b: operator b
*
* Return: integer.
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
* op_mul - multiply
* @a: operator a
* @b: opeartor b
*
* Return: integer.
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
* op_div - Divide
* @a: operator a
* @b: operator b
*
* Return: integer
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
* op_mod - Modulus
* @a: operator a
* @b: operator b
*
* Return: integer.
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
