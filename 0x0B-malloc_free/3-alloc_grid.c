#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional tab of integers.
 * @width: width of tab
 * @height: height of tab
 *
 * Return: a pointer to a 2 dimensional tab of integers.
 */
int **alloc_grid(int width, int height)
{
	int **tab, i, j;
	int length = width * height;

	if (length <= 0)
		return (NULL);

	tab = (int **)malloc(sizeof(int *) * height);
	if (!tab)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tab[i] = (int *)malloc(sizeof(int) * width);
		if (!tab[i])
		{
			for (i--; i >= 0; i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			tab[i][j] = 0;

	return (tab);
}
