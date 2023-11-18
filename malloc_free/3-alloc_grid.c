#include <stdlib.h>
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width of matrix
* @height: height of matrix
*
* Description: returns a pointer to a 2 dimensional array of integers
* Return: a pointer..
*/
int **alloc_grid(int width, int height)
{
	int **matrix, i, j;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	matrix = malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
		i++;
	}
	return (matrix);
}
