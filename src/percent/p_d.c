/*
** EPITECH PROJECT, 2019
** pr_d
** File description:
** function of the printf
*/

#include "../../lib/my.h"
#include <stdio.h>

char *p_d(va_list arg)
{
    int result = va_arg(arg, int);
    return (intcpy(result));
}