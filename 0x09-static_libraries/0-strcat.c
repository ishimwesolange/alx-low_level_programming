#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int in = 0;
	int dest_len = 0;

	while (dest[in++])
		dest_len++;
	for (in = 0; src[in]; in+)
		dest[dest_len++] = src[in];
	return (dest);
}
