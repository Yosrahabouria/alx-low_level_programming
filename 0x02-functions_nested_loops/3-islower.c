#include "main.h"
/**
 * islower - print alphabet in lower case
 * Return:always 0 (success)
*/
int _islower(int c)
{ int c;

if (c >= 97 && c <= 122)
{
return(1);
}
else return(0);
_putchar('\n');
}
