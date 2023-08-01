#include "main.h"
#include <stdlib.h>


/**
 * *create_array - create a memory
 * @size : size of elemnt
 * @c: charater
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr  = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
