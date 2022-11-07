#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a matrix of integers
 * @width: The width of the grid
 * @height: The height of the grid
 * Return: void
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int k, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = malloc(height * sizeof(int *));
	if (g == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		g[k] = malloc(width * sizeof(int));
		if (g[k] == NULL)
		{
			while (k >= 0)
				free(g[k--]);
			free(g);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			g[k][j] = 0;
	}
	return (g);
}
