#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatenates two strings
 * Return: void
 * @dest : input string
 * @src : input string
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
dest[i] = '\0';
return (dest);
}

