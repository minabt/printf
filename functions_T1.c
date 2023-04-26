#include "main.h"
/**
 * print_int - prints an integer.
 * @params: input parameters to print.
 * Return: the number of character printed.
*/
int print_int(va_list params)
{
int n1, number, mod, digit, power10, i;
i = 1;
power10 = 1;
n1 = va_arg(params, int);
mod = n1 % 10;
n1 = n1 / 10;
number = n1;
if (mod < 0)
{
_putchar(45);
n1 = -n1;
number = -number;
mod = -mod;
i++;
}
if (number > 0)
{
while (number / 10 != 0)
{
power10 *= 10;
number /= 10;
}
number = n1;
while (power10 > 0)
{
digit = number / power10;
_putchar(digit + '0');
number -= digit *power10;
power10 /= 10;
i++;
}
}
_putchar(mod + '0');
return (i);
}
/**
 * print_dec - print decimal number
 * @params: parametres to print
 * Return:  the number of characters printed.
*/
int print_dec(va_list params)
{
int n2, number2, mod2, digit2, power10, j;
j = 1;
power10 = 1;
n2 = va_arg(params, int);
mod2 = n2 % 10;
n2 = n2 / 10;
number2 = n2;
if (mod2 < 0)
{
_putchar(45);
n2 = -n2;
number2 = -number2;
mod2 = -mod2;
j++;
}
if (number2 > 0)
{
while (number2 / 10 != 0)
{
power10 *= 10;
number2 /= 10;
}
number2 = n2;
while (power10 > 0)
{
digit2 = number2 / power10;
_putchar(digit2 + '0');
number2 -= digit2 *power10;
power10 /= 10;
j++;
}
}
_putchar(mod2 + '0');
return (j);
}
