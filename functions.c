#include <stdio.h>
#include "main.h"

int print_char(void *caracter)
{
	char c;
	c = *((char *)caracter); /* Cast */

	write (1, &c, 1);

	return (1);
}

int print_string(void *string) 
{
	int i, len = 0;
	char *str = "";
	*str = (char *)string;

	for (i = 0; string[i] != '\0'; i++)
	{
		write (1, &string[i], 1);
		len++;
	}
	return (len);
}
int print_int(void *numero) /* %d y %i */
{
	int num = 0, aux = 0, len = 0;

	num = (int)numero;

	if (num == 0)
	{
		write(1, '0', 1);
		return (1);
	}
	if (num > 0)
	{
	
	}
	if (num < 0)
	{
	
	}
	return (len);
}
