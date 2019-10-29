#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * put_char - printing a char.
 * @arg: next argument.
 * Description - no need to.
 */
int put_char(va_list arg)
{
_putchar(va_arg(arg, int));
return (1);
}
/**
 * put_string - printing a string.
 * @arg: next argument.
 * Description - no need to.
 */
int put_string(va_list arg)
{
char *str;
int i = 0;
str = va_arg(arg, char *);
if (str == NULL)
str = "(null)";
while (str[i])
{
_putchar(str[i]);
i++;
}
return (i - 1);
}
/**
 * put_hash - treat of hash.
 * @arg: next argument.
 * Description - no need to.
 */
int put_hash(va_list arg)
{
(void) arg;
_putchar('%');
return (1);
}
