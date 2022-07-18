#include "main.h"

/**
 * _memcpy - opies n bytes from memory area src to memory area dest
 * @*dest: the memory location we're copying to
 * @*src: the memory locatin we're copyign from
 * @n: number of bytes of data in *src to be copied
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	
	for (i = 0; i < n; i++);
	{
		dest[i] = src[i];
	}
	return (dest);
}
