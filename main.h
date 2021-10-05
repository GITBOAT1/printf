#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int print_char(va_list al);
int print_str(va_list al);
int _putchar(char c);
int _puts(char *str, int ascii);
int convert_alpha_numeric(int nb, int upper);
char *convert_base(unsigned long nb, unsigned int base, int upper);


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
#endif
