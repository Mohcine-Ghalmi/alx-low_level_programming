#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
		return (NULL);

	tab = (char *)malloc(sizeof(char) * size);
	if (!tab)
		return (NULL);

	for (i = 0; i < size; i++)
		tab[i] = c;

	return (tab);
}
