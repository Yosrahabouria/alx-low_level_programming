#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *_memcpy - copy memory area
 * @dest : memory where is stored
 * @src : memory where is copied
 * @n : number of bytes
 * Return : 0 (success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	   int r = 0;
	   int i = n;

for (r = 0; r < i; r++)
{
dest[r] = src[r];
n--;
}
return (dest);
}

