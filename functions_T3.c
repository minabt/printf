#include "main.h"
/**
 * print_un - print an unsigned number
 * @arg: to print
 * Return: number of characters printed.
*/
int print_un(va_list arg)
{
unsigned int n;
int  number, mod, digit, power10, j;
j = 1;
power10 = 1;
n = va_arg(arg, unsigned int);
mod = n % 10;
n = n / 10;
number = n;
if (mod < 0)
{
_putchar(45);
n = -n;
number = -number;
mod = -mod;
j++;
}
if (number > 0)
{
while (number / 10 != 0)
{
power10 *= 10;
number /= 10;
}
number = n;
while (power10 > 0)
{
digit = number / power10;
_putchar(digit + '0');
number -= digit *power10;
power10 /= 10;
j++;
}
}
_putchar(mod + '0');
return (j);
}
/**
 * print_oct - print a number in octal
 * @arg: to print
 * Return: number of characters printed.
*/
int print_oct(va_list arg)
{
unsigned int n, c;
int i, j;
int *oct_array;
i = 0;
j = 0;
n = va_arg(arg, unsigned int);
c = n;
while (n / 8 != 0)
{
n = n / 8;
j++;
}
j++;
oct_array = malloc(j *sizeof(int));
for (; i < j; i++)
{
oct_array[i] = c % 8;
c = c / 8;
}
for (i = j - 1; i >= 0; i--)
{
_putchar(oct_array[i] + '0');
}
free(oct_array);
return (j);
}
/**
 * print_hex - output a hexadecimal number (x : for lower case letters).
 * @arg: input number
 * Return: number of characters printed.
*/
int print_hex(va_list arg)
{
int i, j;
int *array;
unsigned int n, h;
i = 0;
j = 0;
n = va_arg(arg, unsigned int);
h = n;
while (n / 16 != 0)
{
n = n / 16;
j++;
}
j++;
array = malloc(j *sizeof(int));
if (h == 0)
{
_putchar(48);
return (1);
}
for (; i < j; i++)
{
array[i] = h % 16;
h = h / 16;
}
for (i = j - 1; i >= 0; i--)
{
if (array[i] > 10)
array[i] = 39 + array[i];
_putchar(array[i] + '0');
}
free(array);
return (j);
}

/**
 * print_HEX - output a hexadecimal number (X : for upper case letters).
 * @arg: input number
 * Return: number of characters printed.
*/
int print_HEX(va_list arg)
{
int i, j;
int *array;
unsigned int n, h;
i = 0;
j = 0;
n = va_arg(arg, unsigned int);
h = n;
while (n / 16 != 0)
{
n = n / 16;
j++;
}
j++;
array = malloc(j *sizeof(int));
if (h == 0)
{
_putchar(48);
return (1);
}
for (; i < j; i++)
{
array[i] = h % 16;
h = h / 16;
}
for (i = j - 1; i >= 0; i--)
{
if (array[i] > 10)
array[i] = 7 + array[i];
_putchar(array[i] + '0');
}
free(array);
return (j);
}
