#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
void put_char(va_list arg);
void put_string(va_list arg);
/**
 * put_form: choose function to use based on the input.
 * @type: character which will indicate the type.
 * @func: the function we should use for the type.
 * Description: no need for deeper description.
 */
typedef struct put_form 
{
char type;
void (*func)(va_list arg);
}put_form;
#endif
