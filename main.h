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
char *_itoa(int, char*, int);
char *_strrev(char*);
void print(char *);
int convert_alpha_numeric(int nb, int upper);
char *convert_base(unsigned long nb, unsigned int base, int upper);
char *mem_alloc(const char *);
int choice(char);

int (*func_ptr[6])(int);
int d_fun(int);
int c_fun(int);
int i_fun(int);
int s_fun(int);

va_list vl;
int i_m, j_m;
char *buff, *str_arg, tmp[100];

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
