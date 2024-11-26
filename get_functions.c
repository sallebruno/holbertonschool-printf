#include "main.h"
#include <stdio.h>
#include <limits.h>

int (*get_functions(char *s)
{

flags_t flag[] = {
	{'i', i},
	{'d', d},
	{'c', (int (*)char *))c},
	{'s', (int (*)char *))s},
	{0, NULL}
};
  int i;
  
  i = 0;

  while (flags_t && s && s[i] != '\0')
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
