#ifndef MAIN_H
#define MAIN_H

/* Include files */
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

/* Prototype */
int _sprintf(char *str, const char *format, ...);
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);
int _strlen(char *s);

#endif /* MAIN_H */
