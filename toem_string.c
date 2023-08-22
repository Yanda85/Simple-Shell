#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @s: the string on which length to check
 *
 * Return:the  integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - performs editing on comparison of two strangs.
 * @s1: the first strang
 * @s2: the second strang
 *
 * Return: negative on s1 < s2, positive on s1 > s2, zero on s1 == s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - ensure that the  needle starts with haystack
 * @haystack: string to look for
 * @needle: the substring to get
 *
 * Return: it address  next chararacter in haystack or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - links two strings
 * @dest: the destination of  buffer
 * @src:  source the buffer
 *
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
