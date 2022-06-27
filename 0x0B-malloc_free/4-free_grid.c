#include "main.h"

/**
 * free_grid - free allocated space for two dimensional array
 * @grid: double pointer
 * @height: h
 * Return: NOthing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
