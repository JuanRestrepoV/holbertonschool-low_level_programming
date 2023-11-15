#include <stdio.h>
#include <stdlib.h>
/**
* main - program that adds positive numbers.
* @argc: argument count
* @argv: variable that points to an array of char.
*
* Description: prints the number of arguments passed into it.
* Return: 0 if succes
*/
int main(int argc, char *argv[])
{
	int a, sum = 0;

	for (a = 0; a < argc; a++)
	{
		if (*argv[a] < '0' && *argv[a] > '9')
		{
			printf("error\n");
			return (1);
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
