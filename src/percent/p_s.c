/*
** EPITECH PROJECT, 2019
** pr_s
** File description:
** function of the printf
*/

#include "../../lib/my.h"

char *p_s(va_list arg)
{
    char *str = va_arg(arg, char *);
    return (str);
}