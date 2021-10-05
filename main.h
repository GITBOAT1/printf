#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int _putchar(char c);

/**
 * struct func_id - struct used for identifying function
 * @c: string
 * @f: pointer to function
 */
typedef struct func_id
{
char *c;
int (*f)(va_list);
} function_identifier;

int get_func(char, va_list);
#endif
