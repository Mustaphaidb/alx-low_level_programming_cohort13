#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocate memory of an array
 * @nmemb: number of array's elements
 * @size: size of the array memory
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
	char *memalloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memalloc = malloc(nmemb * size);
	if (memalloc == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		memalloc[i] = 0;
	}

return (memalloc);
}
