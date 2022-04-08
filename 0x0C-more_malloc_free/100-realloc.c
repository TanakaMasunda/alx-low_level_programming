#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates amemory block
 * @ptr: pointer to the previously allocated memory
 * @old_size: size in bytes of the allocated space of ptr
 * @new_size: new_size in bytes of the new memory
 *
 * Return: ptr, ptr without changes if new_size == old_size,malloc fails(NULL)
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size)
		return (ptr);
}
