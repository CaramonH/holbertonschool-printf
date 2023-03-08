#ifndef MAIN_H
#define MAIN_H


/* STANDARD LIBRARIES */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

/* STRUCTS */

typedef struct print
{
	char *print;
	void (*f)(char*, ...)
} print_t;

/* FUNCTION PROTOTYPES */
/* _printf.c */
int _printf(const char *format, ...);
