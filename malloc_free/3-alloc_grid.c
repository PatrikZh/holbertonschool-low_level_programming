#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: the given value
 * @height: the given value
 * Return: result
 */

int **alloc_grid(int width, int height)
{
	int **size, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	size = malloc(sizeof(int *) * height);

	if (size == NULL)
		return  (NULL);

	for (i = 0; i < height; i++)
	{
		size[i] = malloc(sizeof(int) * width);
		if (size[i] == NULL)
		{
			while (i >= 0)
			{
				free(size[i]);
				i--;
			}
				free(size);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			size[i][j] = 0;
		}
	}
	return (size);
}
