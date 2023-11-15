#include <stdio.h>
/**
* main -  prints all arguments it receives.
* @argc: argument count
* @argv: argument vector
*
* Description:  prints all arguments it receives.
* Return: 0 if succes
*/
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
