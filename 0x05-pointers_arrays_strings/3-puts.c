#include <stdio.h>
#include <stdlib.h>
stdout
#include "main.h"
/**
 * _puts- print alphabet in lower case
 * Return:always 0 (success)
 * @str : the input string
*/

void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}
