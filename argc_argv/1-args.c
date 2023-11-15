#include <stdio.h>
/**
* main - prints the number of arguments passed into it.
* @argc: argument count
* @argv: argument vector
*
* Description: prints the number of arguments passed into it.
* Return: 0 if succes
*/
int main(int argc, char *argv[])
{
	*argv = argv[1];
	printf("%d\n", argc);
	return (0);
}
