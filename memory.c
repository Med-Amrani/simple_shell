/**
 * bfree - frees a pointer and NULLs the address
 * @ptr: address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */


#include "shell.h"

 int bfree(void **ptr)
           {
	if (ptr && *ptr)

	{
		free(*ptr);
		*ptr = NULL;

return (1);
	}

	return (0);
}
