#include "main.h"
/**
 *print_sign - check if greter or less than zero
 * Return: 1 if greter than zero.0 if zero. -1 is less than zero (success)
 * @n : the code ASCII
*/
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar(43);
}
else if (n == 0)
{
return (0);
_putchar(48);
}
else
{
return (-1);
_putchar(45);
}
_putchar('\n');
}
