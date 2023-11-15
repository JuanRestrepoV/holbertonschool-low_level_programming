#include <stdio.h>
/**
* main -  prints its name, followed by a new line.
* @argc: argument count
* @argv: argument vector
*
* Description: Write a program that prints its name, followed by a new line.
* Return: 0 if succes
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
