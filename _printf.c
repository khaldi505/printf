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
va_list arg;
int i = 0, len = 0;
va_start(arg, format);
if (format == NULL)
return (-1);
while (format[i])
{
if ((format[i] == '%') && format[i + 1] == '\0')
return (-1);
else if (format[i] == '%')
{
len += struu(format, i, arg);
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
