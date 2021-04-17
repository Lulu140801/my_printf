/*
** EPITECH PROJECT, 2020
** My.h
** File description:
** Header on my lib
*/

#ifndef MY_H
#define MY_H

#include <stdarg.h>
#include <stdlib.h>

int my_printf(char const *str, ...);
char *compare(char str, va_list arg);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_strlint(int nb);
int my_strlunint(unsigned int nb);
char *intcpy(int result);
char *unintcpy(unsigned int result);
char *my_hexadecimal(int result, int size);
int my_pow(int nb, int power);
char *p_i(va_list arg);
char *p_d(va_list arg);
char *p_c(va_list arg);
char *p_x(va_list arg);
char *p_X(va_list arg);
char *p_s(va_list arg);
char *p_S(va_list arg);
char *p_o(va_list arg);
char *p_u(va_list arg);

#endif
