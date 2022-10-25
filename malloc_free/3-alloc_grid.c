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
	
	size = (int **)malloc(sizeof(int*) * height);
		
	if (size == NULL)
		return  (NULL);

	i = 0;
	while (i < height)
	{
		size[i] = malloc(sizeof(int) * width);
		if (size[i] == NULL)
			return  (NULL);
		i++;
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
