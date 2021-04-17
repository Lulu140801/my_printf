/*
** EPITECH PROJECT, 2020
** printf
** File description:
** printf a string give with a characteristique
*/

#include "../lib/my.h"

char *my_strcpy_2(char *dest, char *src)
{
    int nb = 0;
    int nb_2 = 0;
    char *str = malloc(sizeof(char) * (my_strlen(src) + my_strlen(dest)) + 1);

    if (my_strlen(src) == 0)
        return (dest);
    for (; src[nb] != '\0'; nb++, nb_2++) {
        str[nb_2] = src[nb];
    }
    nb = 0;
    for (; dest[nb] != '\0'; nb++, nb_2++) {
        str[nb_2] = dest[nb];
    }
    str[nb_2] = '\0';
    return (str);
}

char *display(char const *str, va_list arg)
{
    char *src = malloc(sizeof(char) * my_strlen(str) + 1);
    char *dest;
    char *temp = "\0";

    for (int nb = 0, nb2 = 0; str[nb] != '\0'; nb++, nb2++) {
        if (str[nb] == '%') {
            nb++;
            dest = compare(str[nb], arg);
            temp = my_strcpy_2(src, temp);
            temp = my_strcpy_2(dest, temp);
            src = malloc(sizeof(char) * my_strlen(str) + 1);
            nb2 = -1;
        } else
            src[nb2] = str[nb];
    }
    temp = my_strcpy_2(src, temp);
    return (temp);
}

int my_printf(char const *str, ...)
{   
    char *src;
    va_list arg;
    va_start(arg, str);
    src = display(str, arg);
    va_end(arg);
    my_putstr(src);
    return (my_strlen(src));
}