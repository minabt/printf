#include "main.h"
/**
 * print_pointer - printf a pounter p
 * @params: arguments to print.
 * Return: number of characters.
*/
int print_pointer(va_list params)
{
void *p;
char *str = "(nil)";
int a, b;
long int  c;
a = 0;
p = va_arg(params, void*);
if (p == NULL)
{
for (; str[a] != '\0'; a++)
{
_putchar(str[a]);
}
return (a);
}
c = (unsigned long int)p;
_putchar(48);
_putchar('x');
b = print_hex_pointer(c);
return (b + 2);
}
/**
 * print_hex_pointer - print a hexedicimal number
 * @c: the number
 * Return: j
*/
int print_hex_pointer(unsigned long int c)
{
int i, j;
int *array;
unsigned long int  h;
i = 0;
j = 0;
h = c;
while (c / 16 != 0)
{
c = c / 16;
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
