#include <stdio.h>
#include "main.h"

char c (char *caracter)
{
    return (caracter[0]);
}

char *s (char *string)
{
    return (string);
}
int d (char *str)
{
  int i, len;

  len = 0;
  
  for (i = 0; str[i] != '\0'; i++)
    {
      len++;
    }
  return (len);
}

int i (char *str)
{
  int i, len;

  len = 0;
  
  for (i = 0; str[i] != '\0'; i++)
    {
      len++;
    }
  return (len);
}
