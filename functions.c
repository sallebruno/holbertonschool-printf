#include "main.h"
/**
 * print_char - Print a single char
 * @caracter: caracter to be printed
 * Return: 1
 */
int print_char(int caracter)
{	write(1, &caracter, 1);
	return (1);
}
/**
 * print_string - Receives a string to printed
 * @string: The string to print
 * Return: The lenght of the string
 */
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
/**
 * print_int - Receives a number to print
 * @numero: The number to print
 * Return: The total of numbers
 */
int print_int(int numero)
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
	while (--i >= 0) /* Para que no se vaya de rango */
	{
		len += write(1, &buffer[i], 1);
	}
	return (len);
}
