/*
** EPITECH PROJECT, 2020
** intcpy
** File description:
** copy int of the string
*/

#include "my.h"

char *intcpy_2(int temp, int sous_result, int result, char *str_result)
{
    int nb = result;

    for (int nb2 = 0; temp != sous_result; temp++) {
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

char *intcpy(int result)
{
    int temp = 0;
    char *str_result;
    int sous_result = my_strlint(result);
    str_result = malloc(sizeof(char) * my_strlint(result) + 2);

    if (result < 0) {
        str_result[temp] = '-';
        temp++;
        result = result * -1;
        sous_result++;
    }
    str_result = intcpy_2(temp, sous_result, result, str_result);
    return (str_result);
}