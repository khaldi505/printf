#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int put_char(va_list arg);
int put_string(va_list arg);
int put_hash(va_list arg);
int put_numb(va_list args);
/**
 * put_form: choose function to use based on the input.
 * @type: character which will indicate the type.
 * @func: the function we should use for the type.
 * Description: no need for deeper description.
 */
typedef struct put_form 
{
char type;
int (*func)(va_list arg);
}put_form;
int struu(const char *format, int n,va_list arg);
#endif
