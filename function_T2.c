#include "main.h"
/**
 * print_bin - convert an unsigned int to binary.
 * @bin: arguments
 * Return: he number of characters printed
*/
int print_bin(va_list bin)
{
int k, l;
unsigned int b;
int binstore[220];
k = 0;
b = va_arg(bin, unsigned int);
if (b ==  0)
{
_putchar(48);
return (1);
}
while (b > 0)
{
binstore[k] = b % 2;
b = b / 2;
k++;
}
for (l = k - 1; l >= 0; l--)
{
_putchar(binstore[l] + '0');
}
return (k);

}

