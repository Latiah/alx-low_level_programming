#include "main.h"
#include<string.h>
#include<stdlib.h>
/**
 * free_grid -fress memory allocated
 * @grid: grid
 * @height: height size
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
