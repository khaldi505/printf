#include "holberton.h"
#include <stdarg.h>
/**
 * put_char - printing a char.
 * @arg: next argument.
 * Description - no need to.
 */
void put_char(va_list arg)
{
_putchar(va_arg(arg, int));
}
/**
 * put_string - printing a string.
 * @arg: next argument.
 * Description - no need to.
 */
void put_string(va_list arg)
{
char *str;
int i = 0;
str = va_arg(arg, char *);
while (str[i])
{
_putchar(str[i]);
i++;
}
}
