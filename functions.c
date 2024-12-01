#include "main.h"

int print_char(int caracter)
{	write(1, &caracter, 1);
	return (1);
}

int print_string(char *string) 
{
	int i, len = 0;
	
	if (string == NULL)
	{
		string = "(null)";
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		len++;
		write(1, &string[i], 1);
	}
	return (len);
}
int print_int(int numero) /* %d y %i */
{
	int i = 0, len = 0;
	char buffer[11];

	if (numero == 0)
	{
		return (write(1, "0", 1));
	}
	if (numero < 0)
	{
		len += write(1, "-", 1);
		numero = -numero;
	}
	while (numero > 0)
	{
		buffer[i++] = (numero % 10) + '0';
		numero /= 10;	
	}
	while (i >= 0)
	{
		len += write(1, &buffer[i--], 1);
	}
	return (len);
}
