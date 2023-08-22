#include "shell.h"

/**
* interactive - program checks if shell is interactive
* @info: adress
* Return: 1 if successful and 0 if not
*/

int interactive(info_t *info)
{
  return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
* is_delim - checks for delimiter
* @c: character to be checked
* @delim: the string to be used
* Return: 1 if successful and 0 if not
*/

int is_delim(char c, char *delim)
{
  while (*delim)
{
if (*delim++ == c)
      return (1);
}
return (0);

/**
* _atoi - converts a string argument to an interger
* @c: character to be used
* Return: 1 if successful, 0 if unsuccessful
*/

int _atoi(char *c)
{
  int i, j = 1, k = 0, result = 0;
unsigned int atoi = 0;

for (i = 0; c[i] != '\0' && k != 2; i++)
{
if (c[i] == '-')
  j *= -1;
if (c[i] >= '0' && c[i] <= '9')
{
k = 1;
  atoi *= 10;
  atoi += (c[i] - '0');
}
else if (k == 1)
    k = 2;
}
if (j == -1)
  result = -atoi;
else
  result = atoi;
  
return (result);
}
