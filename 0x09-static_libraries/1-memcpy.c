#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area @src
 * to memory area @dest
 *
 * @a: function copies
 *
 * @src: bytes from memory area
 *
 * @dest: to memory area
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int a)
{
	unsigned int i = 0;

	while (i < a)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
