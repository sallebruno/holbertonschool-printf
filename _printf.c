#include "main.h"

int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list aux;

	if (format == NULL)
		return (-1);
	va_start(aux, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);

			switch (format[i])
			{
				case 'c':
				len += print_char(va_arg(aux, int));
				break;

				case 's':
				len += print_string(va_arg(aux, char *));
				break;

				case '%':
				len += write(1, "%", 1);
				break;

				case 'i':
				case 'd':
				len += print_int(va_arg(aux, int));
				break;

				default:
				len += write(1, "%", 1);
				len += write(1, &format[i], 1);
				break;
			}
		}
		else
		len += write(1, &format[i], 1);
	}
	va_end(aux);
	return (len);
}
