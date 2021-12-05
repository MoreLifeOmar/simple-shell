#include <main.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

/**
 * _check - taking care of malloc.
 * @buffer: the string.
 * @av: argument vector.
 * Return: 0 or 22
 */

int _check(char *buffer, char **av)
{
	if (buffer == NULL)
	{
		perror(av[0]);
		exit(EXIT_FAILURE);
	}
	return (0);
}

/**
 * _arrayMalloc - taking care of mallocing an array.
 * @argv: arguments.
 * @buffersize: size to malloc.
 * @av: argument vector.
 * Return: 0 or 22
 */

int _arrayMalloc(char **argv, size_t buffersize, char **av)
{
	size_t i, j;

	for (i = 0; i < buffersize; i++)
		argv[i] = malloc(buffersize);
	for (i = 0; i < buffersize; i++)
	{
		if (argv[i] == NULL)
		{
			perror("malloc");
			for (j = 0; j < buffersize; j++)
				free(argv[j]);

			free(argv);
			perror(av[0]);
			exit(EXIT_FAILURE);
		}
	}
	return (0);
}

/**
 * strneifer - taking care of the command prompt.
 * @token: one of the paths in PATH.
 * @argv: our arguments.
 * @dest: the command.
 * Return: dest.
 */

char *strneifer(char *token, char **argv, char *dest)
{
	_strcpy(dest, token);
	_strcat(dest, "/");
	_strcat(dest, argv[0]);
	return (dest);
}

/**
 * parenting - taking care of fork and execve.
 * @dest: path/command.
 * @argv: arguments.
 * @av: the program's argument vector.
 * Return: 0.
 */

int parenting(char *dest, char **argv, char **av)
{
	pid_t pid;

	argv[0] = _strdup(dest);
	pid = fork();
	if (pid == -1)
		perror("Error:");
	else if (pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror(av[0]);
			exit(1);
		}
	}
	else
		wait(0);
	return (0);
}

/**
 * bulties - taking care of built-ins.
 * @argv: arguments.
 * @env: environment.
 * Return: 0.
 */

int bulties(char **argv, char **env)
{
	int i = 0;

	while (argv[i])
		i++;
	if (i > 2 && _strcmp(argv[0], "exit") == 0)
	{
		perror("Error");
		return (1);
	}
	else if (i == 1 && _strcmp(argv[0], "exit") == 0)
		exit(EXIT_SUCCESS);
	else if (_strcmp(argv[0], "exit") == 0)
	{
		exit(_atoi(argv[1]));
	}
	if (_strcmp(argv[0], "env") == 0)
	{
		while (env[i])
		{
			printy(env[i]);
			_putchar('\n');
			i++;
		}
	}
	return (0);
}
