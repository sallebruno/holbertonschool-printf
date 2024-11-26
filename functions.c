#include <stdio.h>
#include "main.h"

int print_char(char *caracter)
{
	return (1);
}

int print_string(char *string) 
{
	int i;

	
}
int print_int(char *str) /* %d y %i */
{
	int i, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
