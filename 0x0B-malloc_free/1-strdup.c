#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a cp of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *cp;
	int i, length = 0;

	if (!str)
		return (NULL);

	while (str[length] != '\0')
		length++;

	cp = (char *)malloc((sizeof(char) * length) + 1);
	if (cp == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		cp[i] = str[i];
	cp[length] = '\0';

	return (cp);
}
