#include "main.h"
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...)
{
	int i, j, len = 0;
	va_list aux;
	char *str = "";
	int c;
	int (*f)(void *);

	va_start(aux, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
				c = va_arg(aux, int);
				get_functions(c);
				break;
				case 's':
				
				break;
				case '%':

				break;
			}
		}
	}

}
