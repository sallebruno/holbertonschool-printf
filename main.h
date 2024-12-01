#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);

int print_char(int caracter);
int print_string(char *string);
int print_int(int numero);

#endif
