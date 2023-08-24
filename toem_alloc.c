#include "shell.h"

/**
* bfree - frees memory
* @ptr: pointer address
* Return: 1 if sucessful, 0 if unsuccessful
*/

int bfree(void **ptr)
{
  if (ptr && *ptr)
{
free(*ptr);
*ptr = NULL;
return (1);
}
return (0);
}
