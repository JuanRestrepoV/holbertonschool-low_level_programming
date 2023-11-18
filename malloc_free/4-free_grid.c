#include <stdlib.h>
#include <stdlib.h>
/**
* free_grid - frees a 2 dimensional grid previously created
*by your alloc_grid function.
* @grid: width of matrix
* @height: height of matrix
*
* Description: frees a 2 dimensional grid previously created
* by your alloc_grid function.
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
