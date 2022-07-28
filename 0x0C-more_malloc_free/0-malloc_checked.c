#include "main.h"

/**
 * Malloc_checked - Allocates memory using malloc
 * @b: Bytes Allocation
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
