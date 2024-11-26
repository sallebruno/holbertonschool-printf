#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...);

typedef struct flags
{
	char flag;
	int (*f)(char *str);
} flags_t;

int print_char(char *caracter); /* todas estas funciones tienen que devolver cuantos caracteres imprimieron */
int print_string(char *string);
int print_int(char *str);
int (*get_functions)(char *s);

#endif
