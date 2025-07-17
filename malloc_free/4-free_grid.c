#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D grid created by alloc_grid
 * @grid: Pointer to the grid (array of pointers)
 * @height: Number of rows in the grid
 *
 * Description: Frees each row, then frees the array of row pointers.
 */
void free_grid(int **grid, int height)
{
    int i;

    if (grid == NULL)
        return;

    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }
    free(grid);
}


