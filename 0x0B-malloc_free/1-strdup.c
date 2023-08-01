#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - pointer to duplicate a string
 * @str: string
 *
 * Return: pointed to duplicates string
 */

char *_strdup(char *str)
{
	unsigned int size, i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	ptr = malloc(sizeof(char) * (size + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];


	return (ptr);
}
