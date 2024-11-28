#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);

typedef struct flags
{
	char flag;
	int (*f)(void *);
} flags_t;

int print_char(void *caracter); /* todas estas funciones tienen que devolver cuantos caracteres imprimieron */
int print_string(void *string);
int print_int(void *str);
int (*get_functions(const char *s))(void *);

#endif
