#include "main.h"
/**
 * free_grid - It is a function
 * @grid: Variable from main
 * @height: Variable from main
 * Return: Return Void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
