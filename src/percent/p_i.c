/*
** EPITECH PROJECT, 2019
** pr_i
** File description:
** function of the printf
*/

#include "../../lib/my.h"

char *p_i(va_list arg)
{
    int result = va_arg(arg, int);
    return (intcpy(result));
}