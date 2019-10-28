#include <stdio.h>
#include "holberton.h"
#include <stdarg.h>
/**
 * _printf - similar funct to the std printf
 * @format: string to print to screen.
 * Return: length of the output.
 */
int _printf(const char *format, ...)
{
put_form form[] = {
{'c', put_char},
{'s', put_string},
{0, NULL}
};
va_list arg;
int i = 0, j, len = 0;
va_start(arg, format);
while (format && format[i])
{
if (format[i] == '%')
{
for (j = 0; j < 3; j++)
{
if (format[i + 1] == form[j].type)
{
form[j].func(arg);
len++;
}
}
i++;
}
else
{
_putchar(format[i]);
len++;
}
i++;
}
va_end(arg);
return (len);
}
