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
if (*str1 == *str2)
  return (0);
else
  return (*str1 < *str2 ? -1 : 1);
}

/**
* starts_with - checks letters in a string
* @letter: string to search
* @str: string to find
* Return: address of letter or NULL
*/

char *starts_with(const char *letter, const char *str)
{
  while (*str)
    if (*str++ != *letter++)
      return (NULL);
return ((char *)letter);
}

/**
* _strcat - concatenates strings
* @dest: destination string
* @src: source string
*/

char *_strcat(char *dest, char *src)
{
  char *result = dest;
while (*dest)
  dest++;
while (*src)
  *dest++ = *src++;
*dest = *src;
return (result);
}
