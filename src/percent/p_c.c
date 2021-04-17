/*
** EPITECH PROJECT, 2019
** pr_c
** File description:
** function of the printf
*/

#include "../../lib/my.h"

char *p_c(va_list arg)
{
    char *str = malloc(sizeof(char) * 2);
    int result = va_arg(arg, int);
    str[0] = result;
    str[1] = '\0';
    return (str);
} 