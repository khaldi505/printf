#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * put_numb - print number
 * @args: next argument.
 * Return: number of chars printed
 */
int put_numb(va_list args)
{
int n = va_arg(args, int);
int div = 1;
int len = 0;
unsigned int num;
if (n < 0)
{
len += _putchar('-');
num = n * -1;
}
else
num = n;
while (num / div > 9)
div *= 10;
while (div != 0)
{
len += _putchar('0' + num / div);
num %= div;
div /= 10;
}
return (len);
}
