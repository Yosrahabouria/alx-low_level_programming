#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_rev - print string in reverse
 * Return:always 0 (success)
 * @s : the input char
*/
void print_rev(char *s)
{
putchar(strrev(s));
putchar('\n');
}
