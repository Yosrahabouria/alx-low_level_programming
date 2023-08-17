#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that print anything
 * @format : input value
*/
void print_all(const char * const format, ...)
{
int i = 0;
int c = 0;
int j;
char *str, *sep = "";
va_list list;
const char t_arg[] = "cifs";

va_start(list, format);

while (format && format[i])
{
j = 0;
while (t_arg[j])
{
if (format[i] == t_arg[j] && c)
{
printf(", ");
break;
} j++;
if (format[i] == 'c')
printf("%s%c", sep, va_arg(list, int));
else if (format[i] == 'i')
printf(" %s%d", sep, va_arg(list, int));
else if (format[i] == 'f')
printf(" %s%f", sep, va_arg(list, double));
else if (format[i] == 's')
str = va_arg(list, char *), c = 1;

if (!str)
{
printf("(nil)");
break;
}
printf("%s", str);
break;

printf("\n"), va_end(list);
}
}
