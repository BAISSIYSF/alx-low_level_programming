#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: pointer to the 2D array to be freed
 * @height: height of the 2D array
 *
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
if (grid != NULL) {
for (int i = 0; i < height; i++) {
free(grid[i]);
}
free(grid);
}
}
