#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct format  - link the right conversion specifiers.
 * @spe: pointer to conversion specifiers
 * @func: pointer to a function.
 */
typedef struct format
{
char *spe;
int (*func)();
} group;
int _printf(const char *format, ...);
int _putchar(int c);
int print_char(va_list ch);
int print_percent(void);
int print_int(va_list params);
int print_dec(va_list params);
int print_string(va_list str);
int print_bin(va_list bin);
int print_un(va_list arg);
int print_oct(va_list arg);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_pointer(va_list params);
int print_hex_pointer(unsigned long int c);
#endif
