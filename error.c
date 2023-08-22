#include "shell.h"

/**
 * _eputs - writes an input string
 * @str: the string to be printed out
 *
 * Return: Nothing/0
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - prints the character c to stderr
 * @c: The char to print
 *
 * Return: On success 1.
 * On error, -1 if  returned, and errno is set appropriately.
 */
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd - prints the character c to given fd
 * @c: The char to print
 * @fd: The file descriptor to write 
 *
 * Return: if success 1.
 * On error, -1 is returned, and error O is set appropriately.
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putsfd - prints out an input string
 * @str: the string to be written
 * @fd: the file descriptor to write to
 *
 * Return: number of character
 **/
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}

