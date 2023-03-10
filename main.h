#ifndef MAIN_H
#define MAIN_H


/* STANDARD LIBRARIES */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* STRUCTS */
/**
 * struct print - printf type with corresponding print function
 * @t: print type
 * @f: print function
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

/* PROTOTYPES */
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_p(va_list p);
int print_i(va_list i);
int print_d(va_list d);
int print_b(va_list b);

#endif
