#include "main.h"
#include "unistd.h"
/**
 * *_strcat - concatinating strings.
 * @dest: string.
 * @src: string.
 * Return: resulting dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, k, n = 0;

	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0')
		n++;
	for (k = 0; k <= n; k++)
	{
		if (k == n)
			dest[i + n] = '\0';
		else
			dest[i + k] = src[k];
	}
	return (dest);
}

/**
 * _strcpy - cpy string
 * @dest: string
 * @src: string
 * Return: value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0, i;

	while (*(src + n) != '\0')
		n += 1;
	for (i = 0; i < n; i++)
		dest[i] = src[i];
	dest[n] = '\0';
	return (dest);
}

/**
  * *_strdup - copying a string.
  * @str: string to copy.
  * Return: pointer.
  */
char *_strdup(char *str)
{
	int i = 0, j;
	char *p;

	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	i += 1;
	p = malloc(i * sizeof(char));
	if (p == NULL)
		return (0);
	for (j = 0; j < i; j++)
		p[j] = str[j];
	p[i] = '\0';
	return (p);
}
/**
 * _strcmp - string comparisation
 * @s1: string.
 * @s2: string.
 * Return: the value of k
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0;

	while (s1[i] != '\0')
		i++;
	while (j < i && k == 0)
	{
		k = s1[j] - s2[j];
		j++;
	}
	return (k);
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and the error is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
