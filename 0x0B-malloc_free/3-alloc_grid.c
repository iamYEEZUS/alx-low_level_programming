#include "alx.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
  int i, j;
  int *ptr = NULL;

  if (width <= 0 || height <= 0)
    return (NULL);

  ptr = (int *)malloc(width * height * sizeof(int));

  for (i = 0; i < width * height; i++)
    {
    }

  return (ptr);
}
