/*
** EPITECH PROJECT, 2021
** my_hexadecimal
** File description:
** change a number in hexadecimal
*/

#include "../lib/my.h"
#include <stdio.h>

char choice(int nb, int size)
{
    if (nb <= 9)
        return (nb + 48);
    switch(nb) {
        case 10:
        return (65 + size);
        case 11:
        return (66 + size);
        case 12:
        return (67 + size);
        case 13:
        return (68 + size);
        case 14:
        return (69 + size);
        case 15:
        return (70 + size);
    }
    return ('0');
}

char *my_hexadecimal(int result, int size)
{
    char *str;
    int b = 0;
    str = malloc(sizeof(char) * 100);

    if (result == 0) {
        str[0] = '0';
        return (str);
    }
    for (int a = 0, power = 0; result != 0; b++) {
        for (int nb = 0; result >= nb; power++) {
            nb = my_pow(16, power);
        }
        power = power - 2;
        a = result / my_pow(16, power);
        result = result - (a * my_pow(16, power));
        str[b] = choice(a, size);
        power = 0;
    }
    return (str);
}