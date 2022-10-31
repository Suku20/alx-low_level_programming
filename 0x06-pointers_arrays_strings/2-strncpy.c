#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: detination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

