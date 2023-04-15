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
/* Declare a pointer to a 2D array of integers and increment variables*/
	unsigned int i;
	char *memalloc;
/* Check for invalid input */
	if (nmemb == 0 || size == 0)
		return (NULL);

/* Allocate memory for the array */
	memalloc = malloc(nmemb * size);
	if (memalloc == NULL) /* Check for allocation failure */
		return (NULL);

	for (i = 0; i < (nmemb * size); i++) /* Initialize each element of the array to zero */
	{
		memalloc[i] = 0;
	}

return (memalloc); /*Return a pointer to the allocated memory of the array*/
}
