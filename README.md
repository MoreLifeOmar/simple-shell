# simple_shell by Omar Cherni
Creating a simple UNIX shell from scratch using only the c programming language.

## Description

Our Shell executes commands typed in as input.

It should:

* Display a prompt and wait for the user to type a command.
* The prompt is displayed again each time a command has been executed.
* If an executable cannot be found, print an error message and display the prompt again.
* Handles errors.
* Handles the “end of file” condition `(Ctrl+D)`.

### Files
* AUTHORS - List of contributors to this repo
* README.md - The README markdown file
* shell.h - header file used throughout each file
* lol.c - the main file
* chaines.c -
* functs.c -
* token_functs.c -

### Project Requirements:
* Allowed editors: `vi`, `vim`, `emacs`
* All your files will be compiled on Ubuntu 14.04 LTS
* Your C programs and functions will be compiled with `gcc 4.8.4` using the flags `-Wall -Werror -Wextra` and `-pedantic`
* All your files should end with a new line
* A `README.md` file, at the root of the folder of the project is mandatory
* Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* No more than 5 functions per file
* All your header files should be include guarded
* Use system calls only when you need to

### Compilation

Our shell can be compiled this way, with the executable:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o .hsh
```
```
./hsh
```

### Testing
Our shell should work like this in interactive mode:
```
$ ./hsh
ShellyIsHomeBabe$ ls
AUTHORS    REsADME.md  functs.c  hsh    hsh
README.md  chaines.c   header.h  lol.c  token_functs.c
ShellyIsHomeBabe$ exit
```
./hsh
ShellyIsHomeBabe$ cat header.h
#ifndef _HEADER_H_
#define _HEADER_H_
#include <stdlib.h>
int _check(char *buffer);
int _arrayMalloc(char **argv, size_t buffersize);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
char *strneifer(char *token, char **argv, char *dest);
int parenting(char *dest, char **argv, char **av);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
int bulties(char **argv, char **env);
char **toky(char *token, char **argv, char *buffer);
char *toky_1(char *token1, char **argv, char *dest);
#endif
ShellyIsHomeBabe$
```

### Built-in Commands

Our Shell handles 2 Built-in commands:

* **exit**
  * Type in: exit
  * Exits the shell.

* **env**
  * Type in: env
  * Prints the current environment.

## List of allowed functions and system calls we used
```
* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* fork (man 2 fork)
* free (man 3 free)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)
* _exit (man 2 _exit)
* isatty (man 3 isatty)
* fflush (man 3 fflush)
```
## Author
##Omar Cherni  <3639@holbertonschool.com>
