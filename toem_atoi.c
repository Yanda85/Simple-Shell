#include "shell.h"

/**
 * interactive - outcome to be true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @c: the character to check
 * @delim: the delimeter string
 * Return: 1 on true, 0 on  false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - check for alphabetic characters
 * @c: Th character to check input
 * Return: 1 if c is alphabetic, 0 if different
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: 0 if no numbers on a string, converted number if different
 */

int _atoi(char *c)
{
	int i, sign = 1, flag = 0, output;
	unsigned int atoi = 0;

	for (i = 0;c[i] != '\0' && flag != 2; i++)
	{
		if (c[i] == '-')
			sign *= -1;

		if (c[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			atoi *= 10;
			atoi += (c[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -atoi;
	else
		output = atoi;

	return (output);
}
