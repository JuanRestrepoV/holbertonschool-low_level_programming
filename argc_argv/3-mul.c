#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - program that multiplies two numbers.
* @argc: argument count
* @argv: variable that represents the number of arguments.
*
* Return: 0 if succes
*/
int main(int argc, char *argv[])
{
	int mult, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mult = a * b;

	printf("%d\n", mult);
	return (0);
}
