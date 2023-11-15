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
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (1);
}
