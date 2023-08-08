#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - allocate memory with malloc
 * @b: unsigned int type
 * Return: return pointer
 */
char *create_array(unsigned int size, char c);
{
	int *ptr;

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
