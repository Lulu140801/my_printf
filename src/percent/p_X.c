/*
** EPITECH PROJECT, 2019
** pr_X
** File description:
** function of the printf
*/

#include "../../lib/my.h"

char *p_X(va_list arg)
{
    int result = va_arg(arg, int);
    return (my_hexadecimal(result, 0));
}