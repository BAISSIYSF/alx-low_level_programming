#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the allocated 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
{
return (NULL);
}

int **grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
return (NULL);
}

for (int i = 0; i < height; i++)
{
grid[i] = calloc(width, sizeof(int));
if (grid[i] == NULL)
{
for (int j = 0; j < i; j++)
{
free(grid[j]);
}
free(grid);
return (NULL);
}
}

return (grid);
}
