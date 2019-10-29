#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * struu - getting the right function.
 * @format: string input.
 * @n: the index of character to treat.
 * @arg: next argument.
 * Return: length of the string printed.
 */
int struu(const char *format, int n, va_list arg)
{
put_form form[] = {
{'c', put_char},
{'s', put_string},
{'%', put_hash},
{'i', put_numb},
{'d', put_numb},
{0, NULL}
};
int i;
for (i = 0; i < 6; i++)
{
if (i == 5)
{
_putchar('%');
_putchar(format[n + 1]);
return (2);
}
else if (format[n + 1] == form[i].type)
{
return (form[i].func(arg));
}
}
return (0);
}
