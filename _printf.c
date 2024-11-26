#include "main.h"
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...)
{
	va_list args;
	int i, j;
	char c;
	char (*flags)(char *);
	char *str;

	va_start(args, format);


	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '"')
          	{
			while (format[i] != '"' && format[i] != '%' && format[i] != '\0')
			{
				write(1, &format[i], 1);
				i++;
			}
		}
		else if (format[i] == '%')
		{
			get_functions(format[i + 1]);
				if (!get_functions)
				{
					return;
				}
		}
	}

}
