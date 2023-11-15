#include "main.h"
#include <stdio.h>
/**
* print_chessboard - Prints the chessboard.
* @a: 2D array representing the chessboard.
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i] < a['\0']; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}