#include "alx.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * @strdup: returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
 * Returns: Nothing
 * On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
  int i = 0, j, k = 0;
  char *newStr = NULL;

  while (str[k] != '\0')
    {
      i++;
      k++;
    }

  newStr = malloc(sizeof(char) * (i + 1));

  if (str == NULL)
    return (NULL);

  for (j = 0; j <= i; j++)
    newStr[j] = str[j];

  return (newStr);
}
