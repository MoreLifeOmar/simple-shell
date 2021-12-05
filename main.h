#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
int _putchar(char c);
void printy(char *str);
int _atoi(char *s);
int _check(char *buffer, char **av);
int _arrayMalloc(char **argv, size_t buffersize, char **av);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *strneifer(char *token, char **argv, char *dest);
int parenting(char *dest, char **argv, char **av);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
int bulties(char **argv, char **env);
char **toky(char *token, char **argv, char *buffer);
char *toky_1(char *token1, char **argv, char *dest);
void freeing(char *buffer, char *token, char *dest, char **argv, char *token1);
#endif
