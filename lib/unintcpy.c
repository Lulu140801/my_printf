/*
** EPITECH PROJECT, 2020
** intcpy
** File description:
** copy int of the string
*/

#include "my.h"

char *unintcpy(unsigned int result)
{
    unsigned int nb = result;
    unsigned int temp = 0;
    char *str_result = NULL;

    str_result = malloc(sizeof(char) * my_strlunint(result) + 1);
    for (unsigned int sous_result = my_strlint(result), nb2; temp != sous_result; temp++) {
        for (; result > 10; nb2++) {
            result = result / 10;
        }
        str_result[temp] = result + 48;
        for (; nb2 != 0; nb2--) {
            result = result * 10;
        }
        nb = nb - result;
        result = nb;
    }
    str_result[temp] = '\0';
    return (str_result);
}