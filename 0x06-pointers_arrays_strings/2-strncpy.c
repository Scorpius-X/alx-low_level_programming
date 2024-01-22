#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @src: second string to copy from
 * @dest: string to be overwritten
 * @n: number of values to copy
 * Description: copies string
 * Return: pointer to dest
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';

	return (dest);
}
