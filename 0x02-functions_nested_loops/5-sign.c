#include "main.h"
/**
 *print_sign - check if greter or less than zero
 * Return: 1 if greter than zero.0 if zero. -1 is less than zero (success)
 * @n : the number
*/
int print_sign(int n)
{
if (n >= 0)
{
return (1);
printf("+");
}
else if (n == 0)
{
return (0);
printf("0")
}
else
{
return (-1);
printf("-1");
}
putchar('\n');
}
