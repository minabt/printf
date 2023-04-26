#include "main.h"
/**
 * print_char - print a char
 *@ch: the character
 *Return: 0 is success
*/
int print_char(va_list ch)
{
char c;
c = va_arg(ch, int);
_putchar(c);
return (0);
}
