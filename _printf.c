#include "main.h"
#include <stdio.h>
#include <limits.h>

int _printf(const char *format, ...)
{
	int i, c = 0, num = 0, len = 0;
	va_list aux;
	int (*f)(void *);

	va_start(aux, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			f = get_functions((char *)&format[i]);
			if (f == NULL)
			{
				return (-1);
			}
			switch (format[i])
			{
				case 'c':
				c = va_arg(aux, int);
				len += f(&c);
				break;

				case 's':
				
				break;

				case '%':
				write (1, "%", 1);
				break;

				case 'i':
				case 'd':
				num = va_arg(aux, int);
				len += f(&num); 
				break;
	
				default:
				return (-1);
			}
		}
		write(1, &format[i], 1);
	}
	return (len);

}
