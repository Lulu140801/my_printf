/*
** EPITECH PROJECT, 2019
** pr_x
** File description:
** function of the printf
*/

#include "../../lib/my.h"

char *p_x(va_list arg)
{
    int result = va_arg(arg, int);
    return (my_hexadecimal(result, 32));
}