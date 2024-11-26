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

char c (char *caracter);
char *s (char *string);
int d (char *str);
int i (char *str);
int (*get_functions(char *s);

#endif
