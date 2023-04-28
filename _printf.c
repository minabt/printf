#include "main.h"
/**
 * _printf - print function that produces output according to a format.
 * @format: character string
 * Return:  the number of characters printed
*/
int _printf(const char *format, ...)
{
va_list para_list;
int i = 0, length = 0, j;
group argums[] = {
	{"%c", print_char}, {"%s", print_string},
	{"%i", print_int}, {"%d", print_dec},
	{"%%", print_percent}, {"%b", print_bin},
	{"%u", print_un}, {"%o", print_oct},
	{"%x", print_hex}, {"%X", print_HEX},
	{"%p", print_pointer}, {"%S", print_S}
	};
if (format == NULL)
return (-1);
va_start(para_list, format);
if (format[0] == '%' && format[1] == '\0')
return (-1);
A:
while (format[i] != '\0')
{
j = 11;
while (j >= 0)
{
if (argums[j].spe[0] == format[i] && argums[j].spe[1] == format[i + 1])
{
length += argums[j].func(para_list);
i = i + 2;
goto A;
}
j--;
}
_putchar(format[i]);
length++;
i++;
}
va_end(para_list);
return (length);
}
