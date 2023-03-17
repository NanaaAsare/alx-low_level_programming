#include "main.h"
#include <stdlib.h>
/**
 * array_range - print integer ordered
 * @min: element minimo
 * @max: element maximo
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i, d = (max - min) + 1;
	int *ptr = NULL;

	if (min > max)
		return (NULL);

	ptr = malloc(d * sizeof(int));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; (min + i) <= max; i++)
		*(ptr + i) = min + i;
	return (ptr);
}
