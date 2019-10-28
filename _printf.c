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
int i = 0, j, len = 0, z = 0;
va_start(arg, format);
if (format == NULL)
return (-1);
while (format[i])
{
if (format[i] == '%' && format[i + 1] == '%')
{
_putchar('%');
len++;
i++;
}
else if ((format[i] == '%') && (format[i + 1] != '%'))
{
for (j = 0; j < 3; j++)
{
if (format[i + 1] == form[j].type)
{
form[j].func(arg);
len++;
z = 1;
break;
}
}
if (z == 0)
{
for (j = 0; j < 3; j++)
{
if (format[i + 1] != form[j].type)
{
_putchar(format[i]);
_putchar(format[i + 1]);
len++;
break;
}
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
