#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

/**
 * toky - taking care of the very first strtok things.
 * @token: char.
 * @argv: arguments.
 * @buffer: string.
 * Return: argv.
 */

char **toky(char *token, char **argv, char *buffer)
{
	int i;

	token = strtok(buffer, "\n");
	i = 0;
	token = strtok(buffer, " ");
	while (token)
	{
		argv[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	argv[i] = NULL;
	return (argv);
}

/**
 * toky_1 - taking care of strtok and path.
 * @token1: char.
 * @argv: arguments.
 * @dest: char.
 * Return: dest.
 */

char *toky_1(char *token1, char **argv, char *dest)
{
	struct stat st;

	while (token1)
	{
		if (argv[0][0] != '/')
			strneifer(token1, argv, dest);
		else
			dest = _strdup(argv[0]);

		if (stat(dest, &st) == 0)
			break;
		token1 = strtok(NULL, ":");
	}
	return (dest);
}

/**
 * freeing - taking care of all free.
 * @buffer: memory to free.
 * @token: memory to free.
 * @token1: memory to free.
 * @dest: memory to free.
 * @argv: memroy to free.
 * Return: N/A.
 */

void freeing(char *buffer, char *token, char *dest, char **argv, char *token1)
{
	int i = 0;

	free(buffer);
	free(token);
	free(token1);
	free(dest);
	while (argv[i])
		free(argv[i]);
	free(argv);
}

/**
 * printy - printing strings.
 * @str: string to print.
 * Return: N/A.
 */

void printy(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - converts a string to a number.
 * @s: string to convert.
 * Return: number or 0 if fails.
 */

int _atoi(char *s)
{
	int found = 0;
	unsigned int num = 0;
	int n = 1;

	while (*s != '\0')
	{
		if (*s == '-')
			n *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			if (!found)
				found = 1;
			num = num * 10 + (*s - '0');
		}
		else
			return (0);
		s++;
	}
	return (num * n);
}
