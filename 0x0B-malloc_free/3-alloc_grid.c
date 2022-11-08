#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **num, i, j, len;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	num = (int **)malloc(height * sizeof(int *));

	if (num == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		num[i] = (int *)malloc(sizeof(int) * width);
		if (num[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(num[j]);
			free(num);
			return (NULL);
		}
	
	len = 0;

	for (j = 0; j < width; j++)
		num[i][j] = len;
	}

	return (num);
}
