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
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	filler = ptr;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (ptr);
}
