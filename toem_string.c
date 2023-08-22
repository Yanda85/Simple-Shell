#include "shell.h"

/**
* _strlen - checks a string's length
* @str: the string to be used
* Return: string length
*/

int _strlen(char *str)
{
  int i = 0;

if (!str)
  return (0);
while (*str++)
  i++;
return (i);
}

/**
* _strcmp - compares two strings
* @str1: first string to be used
* @str2: second string to be used
* Return: 1 if the strings are the same
*/

int _strcmp(char *str1, char *str2)
{
  while (*str1 && *str2)
{
if (*str1 != *str2))
  return (*str1 - *str2);
str1++;
str2++;
}

    
