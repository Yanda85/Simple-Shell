#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @s: the string on which length to check
 *
 * Return:the  integer length of string
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
 * _strcmp - performs editing on comparison of two strangs.
 * @str1: first string to be used
 * @str2: second string to be used
 * Return: 
 */
int _strcmp(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
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
 * starts_with - ensure that the  needle starts with haystack
 * @letter: string to look for
 * @str: the substring to get
 * Return: it address  next chararacter in haystack or NULL
 */
char *starts_with(const char *str, const char *letter)
{
	while (*letter)
		if (*letter++ != *str++)
			return (NULL);
	return ((char *)str);
}

/**
 * _strcat - concatenates links two strings
 * @dest: the destination of  buffer
 * @src:  source the buffer
 * Return: the pointer to destination buffer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
