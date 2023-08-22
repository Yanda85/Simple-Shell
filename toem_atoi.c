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
* @char: character to be checked
* @delim: the string to be used
* Return: 1 if successful and 0 if not
*/

int is_ddelim(char c, char *delim)
{
  while (*delim)
{
if (*delim++ == c)
      return (1);
}
return (0);

/**
* _isalpha - checks if a character is an alphabet
* @c: character to be checked
* Return: 1 if successful and 0 if not
*/

int _isalpha(int c)
{
