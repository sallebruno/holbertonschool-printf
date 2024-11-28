#include <stdio.h>
#include "main.h"

int print_char(void *caracter)
{
	char c = *((char *)caracter); /* Cast */
	if (c)
	{
	write(1, &c, 1);
	}
	return (1);
}

int print_string(void *string) 
{
	int i = 0, len = 0;
	char *str = (char *)string;
	
	if (str == NULL)
	{
		return (-1);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
		len++;
	}
	return (len);
}
int print_int(void *numero) /* %d y %i */
{
	int num = 0, i = 0, len = 0;
	char buffer[11];

	num = *(int *)numero;

	if (num == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (num < 0)
	{
		len += write(1, "-", 1);
		num = -num;
	}
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num = num / 10;	
	}
	while (i > 0)
	{
		len += write(1, &buffer[i--], 1);
	}
	return (len);
}
