#ifndef MAIN_H
#define MAIN_H


/* STANDARD LIBRARIES */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/* STRUCTS */
typedef struct format
{
	char fmt;
	char *(*f)(va_list);
} format;

/* FUNCTION PROTOTYPES */
/* str.c */
char *spr(va_list);

/* int.c */
char *dipr(va_list);

/* char.c */
char *cpr(va_list);

/* _printf.c */
int _printf(const char *format, ...);

#endif
