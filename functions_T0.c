#include "main.h"
/**
 * print_char - print a char
 *@ch: the character
 *Return: 1
*/
int print_char(va_list ch)
{
char c;
c = va_arg(ch, int);
_putchar(c);
return (1);
}
/**
 * print_string - print a string
 * @str: the string
 * Return:  the length of str.
*/
int print_string(va_list str)
{
int i;
char *s;
s  = va_arg(str, char*);
if (s == NULL)
{
s = "(null)";
for (i = 0; i < 6; i++)
{
_putchar(s[i]);
}
return (6);
}
else
{
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
}
return (i);
}

/**
 * print_percent - print percent symbol
 * Return: 1
*/
int print_percent(void)
{
_putchar(37);
return (1);
}

