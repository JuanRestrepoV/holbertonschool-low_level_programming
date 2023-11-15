#include <stdio.h>
#include <stdlib.h>
/**
* main - program that adds positive numbers.
* @argc: argument count
* @argv: variable that points to an array of char.
*
* Description: program that adds positive numbers.
* Return: 0 if succes
*/
int main(int argc, char *argv[])
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
			printf("error\n");
			return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
