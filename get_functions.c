#include "main.h"
#include <stdio.h>
#include <limits.h>

int (*get_functions(char *s))(void *)
{

	flags_t flags[] = {
		{'i', print_int},
		{'d', print_int},
		{'c', print_char},
		{'s', print_string},
		{0, NULL}
	};
	int i = 0, j;

	while (s[i] != '\0')
	{
		if (s[i] == "%")
		{
			i++;
		for (j = 0; flags[j].flag != 0; j++)
		{
			if (s[i] == flags[j].flag[0]) 
			{
				return (flags[j].f);
			}
		}
		}
		i++;
	}
	return (NULL);

}
