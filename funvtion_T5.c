#include "main.h"
/**
 * print_S - print specific string.
 * @arg: arguments
 * Return: lenght of the string
*/
int print_S(va_list arg)
{
char *str;
char *s = "(null)";
int len, temp, i;
i = 0;
len = 0;
str = va_arg(arg, char*);
if (str == NULL)
{
for (; s[i] != '\0'; i++)
{
_putchar(s[i]);
return (6);
}
}
for (; str[i] != '\0'; i++)
{
if (s[i] < 32 || str[i] >= 127)
{
_putchar('\\');
_putchar('x');
len = len + 2;
temp = str[i];
if (temp < 16)
{
_putchar(48);
len++;
}
len = len + print_HEX_S(temp);
}
else
{
_putchar(str[i]);
len++;
}
}
return (len);
}
/**
 * print_HEX_S - print hex number uppercase
 * @n: number
 * Return: j
*/
int print_HEX_S(unsigned int n)
{
int i, j;
int *array;
unsigned int  h;
i = 0;
j = 0;
h = n;
while (n / 16 != 0)
{
n = n / 16;
j++;
}
j++;
array = malloc(j *sizeof(int));
if (!array)
{
_printf("malloc failed\n");
return (-1);
}
for (; i < j; i++)
{
array[i] = h % 16;
h = h / 16;
}
for (i = j - 1; i >= 0; i--)
{
if (array[i] >= 10)
array[i] = 7 + array[i];
_putchar(array[i] + '0');
}
free(array);
return (j);
}

