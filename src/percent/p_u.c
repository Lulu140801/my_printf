/*
** EPITECH PROJECT, 2019
** pr_u
** File description:
** function of the printf
*/

#include "../../lib/my.h"

char *p_u(va_list arg)
{
    unsigned int result = va_arg(arg, unsigned int);
    return (unintcpy(result));
}