#include "main.h"
#include <stdio.h>
#include <limits.h>

int (*get_functions)(char *s)
{

	flags_t flag[] = {
		{'i', print_int},
		{'d', print_int},
		{'c', print_char},
		{'s', print_string},
		{0, NULL}
	};
	int i = 0;

	while (flags_t && s[i] != '\0')
	{
		if (s[i] == "%")
		{
			if (s[i + 1] == flags[i].flag[0]) 
			{
				return (flags[i].f);
			}
		}
		i++;
	}
	return (NULL);

}
