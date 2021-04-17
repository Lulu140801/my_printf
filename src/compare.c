/*
** EPITECH PROJECT, 2020
** compare
** File description:
** compare a string
*/

#include "../lib/my.h"

char *compare(char str, va_list arg)
{
    int nb = 0;
    char *str_2;
    char percent[8] = "idcoxXus";
    char *(*send[8])() = {p_i, p_d, p_c, p_o, p_x, p_X, p_u, p_s};

    while (percent != '\0') {
            if (percent[nb] == str) {
                str_2 = send[nb](arg);
                return (str_2);
            }
            nb++;
        }
}