#include <stdio.h>
/**
 * main - Entry point
 * Return:always 0 (success)
*/
int main(void)

{
int n;
ifor (n = 48; n <= 57; n++)
{
putchar(n);
if (n == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
