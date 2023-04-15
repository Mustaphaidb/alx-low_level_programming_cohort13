#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function copies string
 *@b: size of the memory to allocat for the array
 * Discription: allocate memory for given size
 * Return: 0 if Success
*/
void *malloc_checked(unsigned int b)
{
	void *allocmem = malloc(b);

	if (allocmem == NULL)
		exit(98);

	return (allocmem);
}
