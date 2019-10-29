#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
int struu(const char *format, int n,va_list arg)
{
  put_form form[] = {
    {'c', put_char},
    {'s', put_string},
    {'%', put_hash},
    {0 , NULL}
  };
  int i;
  for (i = 0; i < 4; i++)
    {
      if (i == 3)
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
