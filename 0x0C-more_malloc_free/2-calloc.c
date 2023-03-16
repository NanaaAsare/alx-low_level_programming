#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory
 * @nmemb: elemnts
 * @size: size of data type in bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *filter;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	{
		return (NULL);
	}
	if (ptr == NULL)
		return (NULL);

	filter = ptr;

	for (index = 0; index < (size * nmemb); index++)
		filter[index] = '\0';

	return (ptr);
}
