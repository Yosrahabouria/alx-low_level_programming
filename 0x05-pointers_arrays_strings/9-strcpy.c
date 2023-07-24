#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * char *_strcpy - copies the string pointed to by src
 * Return:string
 * @dest : copy to
 * @src : copy from
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int l = 0;

while (*(src + l) != '\0')
{
	l++;
}
for ( ; i < 1; i++)
{
	dest[i] = src[i];
}
dest[l] = '\0';
return (dest);
}
