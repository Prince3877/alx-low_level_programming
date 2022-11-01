#include "main.h"

/**
 * _mecpy - copy memory area
 * @dest: dest mem area
 * @src: source mem area
 * @n: bytes from mem area to copy
 *
 * REturn: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
