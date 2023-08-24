#include "shell.h"

/**
* _memset - allocates memory
* @s: pointer to memory
* @n: number of bytes
* @b: bytes to fill with
* Return: pointer to memory
*/

char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;
for (i = 0; i < n; i++)
  s[i] = b;
return (s);
}

/**
* ffree - frees memory
*  @pp: string to be used
*/

void ffree(char **pp)
{
  char **a = pp;
if (!pp)
  return;
while (*pp)
  free(*pp++);
free(a);
}

/**
* _realloc - reallocates memory
* @new_size: new memory block
* @old_size: old memory block
* @ptr: pointer
* Return: pointer to memory
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
  char *p;

if (!ptr)
  return (malloc(new_size));
if (!new_size)
  return (free(ptr), NULL);
if (new_size == old_size)
  return (ptr);

p = malloc(new_size);
if (!p)
  return (NULL);

old_size = old_size < new_size ? old_size : new_size;
while (old_size--)
  p[old_size] = ((char *)ptr)[old_size];
free(ptr);
return (p);
}
