#include "main.h"
/**
 *_strncat - cocatenates two strings
 *using at most n bytes from src
 *@dest: input value
 *@src: input value
 *@n: input value
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}


	return (dest);
}
