#include <stdio.h>
#include <stdlib.h>
/**
*free_grid - frees a 2 dimensional grid
*
*@grid: height of the grid
*@height: This is the height in usage
*
*Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}