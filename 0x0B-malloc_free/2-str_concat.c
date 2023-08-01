#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - allocate memory for two
 * string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the memory
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size_1, size_2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size_1 = 0; s1[size_1] != '\0'; size_1++)
		;
	for (size_2 = 0; s2[size_2] != '\0'; size_2++)
		;

	ptr = malloc(sizeof(char) * (size_1 + size_2 + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size_1; i++)
		ptr[i] = s1[i];

	for (j = 0; j < size_2; j++, i++)
		ptr[i] = s2[j];

	return (ptr);
}
